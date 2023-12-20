SUMMARY = "Imagick is a PHP extension to create and modify images using the ImageMagick library."
HOMEPAGE = "https://github.com/Imagick/imagick"

LICENSE = "PHP-3.01"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dd34a70236f008af999de817b93a5e3a"

DEPENDS = "php imagemagick"

SRC_URI = "https://pecl.php.net/get/imagick-${PV}.tgz"

SRC_URI[md5sum] = "0687774a6126467d4e5ede02171e981d"
SRC_URI[sha256sum] = "5a364354109029d224bcbb2e82e15b248be9b641227f45e63425c06531792d3e"

inherit autotools pkgconfig

# Can't explain, why we need the extra CFLAG for including the ImageMagick-7 folder, but it works...
EXTRA_OECONF += "\
    --with-imagick=${STAGING_EXECPREFIXDIR} \
    CFLAGS=-I${STAGING_INCDIR}/ImageMagick-7 \
"

do_configure:prepend() {
    cd ${S}
    ${STAGING_BINDIR_CROSS}/phpize
    # Needed to remove the .im7 extension, so the MagickWand-config is found by the configuration
    cd ${STAGING_BINDIR}
    cp MagickWand-config.im7 MagickWand-config
    cd ${B}
}

do_install() {
    EXTENSION_DIR=$(${STAGING_BINDIR_CROSS}/php-config --extension-dir)
    install -d ${D}${EXTENSION_DIR}
    install -m 0644 ${B}/modules/* ${D}${EXTENSION_DIR}
    install -d ${D}${includedir}/php/ext/${PN}
    install -m 0644 ${S}/php_imagick_shared.h ${D}${includedir}/php/ext/${PN}
    #oe_runmake install INSTALL_ROOT=${D}
}

FILES:${PN} += "${libdir}/php*/extensions/*/*.so"
FILES:${PN}-dbg += "${libdir}/php*/extensions/*/.debug"