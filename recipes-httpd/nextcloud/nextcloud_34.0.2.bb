SUMMARY = "Nexcloud Server"
HOMEPAGE = "http://www.nextcloud.com"
LICENSE = "AGPL-3.0-only"

NEXTCLOUD_ROOT_DIR ?= "/mnt/data/nextcloud"
NEXTCLOUD_DATA_DIR ?= "${NEXTCLOUD_ROOT_DIR}/data"
NEXTCLOUD_LOGFILE ?= "/var/log/nextcloud.log"

RDEPENDS:${PN} += "sqlite3 php php-cgi php-cli wget imagick"

IMAGE_LINGUAS += "de-de en-us"

PACKAGECONFIG ?= "nginx"
PACKAGECONFIG[apache] = ",,,apache2 php-modphp"
PACKAGECONFIG[nginx] = ",,,nginx php-fpm"
PACKAGECONFIG[mariadb] = ",,,mariadb"

LIC_FILES_CHKSUM = "file://COPYING;md5=73f1eb20517c55bf9493b7dd6e480788"

SRC_URI = "https://download.nextcloud.com/server/releases/${P}.tar.bz2 \
           file://config.php.in \
           file://apache.conf \
           file://nginx.conf \
	"
SRC_URI[md5sum] = "5e80f089001362c5774922239b0cf97f"
SRC_URI[sha256sum] = "41ce31df12cc81090c3d07fe0e8b90bde61c92b18ae80e4d648bad43d7991101"

S = "${UNPACKDIR}/${PN}"

FILES:${PN} += "${localstatedir}/*"

do_install() {
    install -d ${D}${localstatedir}/www/${BPN}
    cp -R --no-dereference --preserve=mode,links -v * ${D}${localstatedir}/www/${BPN}/
    # remove patches
    rm -rf ${D}${localstatedir}/www/${BPN}/patches
    
    cp ${S}/config/.htaccess  ${D}${localstatedir}/www/${BPN}/

    # webserver configs
    install -d ${D}${sysconfdir}/apache2/conf.d
    install -m 0644 ${UNPACKDIR}/apache.conf ${D}${sysconfdir}/apache2/conf.d/nextcloud.conf

    install -d ${D}${sysconfdir}/nginx/sites-enabled
    install -m 0644 ${UNPACKDIR}/nginx.conf ${D}${sysconfdir}/nginx/sites-enabled/nextcloud.conf

    # generate config
    install -m 0640 ${UNPACKDIR}/config.php.in ${D}${localstatedir}/www/${BPN}/config/config.php
    sed -i 's:$MACHINE:${MACHINE}:g' ${D}${localstatedir}/www/${BPN}/config/config.php
    sed -i 's:$DATADIR:${NEXTCLOUD_DATA_DIR}:g' ${D}${localstatedir}/www/${BPN}/config/config.php
    sed -i 's:$MACHINE:${MACHINE}:g' ${D}${sysconfdir}/apache2/conf.d/nextcloud.conf
    sed -i 's:$MACHINE:${MACHINE}:g' ${D}${sysconfdir}/nginx/sites-enabled/nextcloud.conf
}

pkg_postinst_ontarget:${PN} () {
    # fix permissions
    chown -R www:www $D${localstatedir}/www/${BPN}

    # create
    mkdir -p ${NEXTCLOUD_DATA_DIR}
    chown www:www ${NEXTCLOUD_DATA_DIR}
    touch ${NEXTCLOUD_LOGFILE}
    chown www:www ${NEXTCLOUD_LOGFILE}
    chmod 750 ${NEXTCLOUD_DATA_DIR}
    ln -sf ${NEXTCLOUD_ROOT_DIR}/apps /var/www/nextcloud/apps2
    chown -h www:www /var/www/nextcloud/apps2
}
