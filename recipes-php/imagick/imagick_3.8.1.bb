SUMMARY = "Imagick is a PHP extension to create and modify images using the ImageMagick library."
HOMEPAGE = "https://github.com/Imagick/imagick"

LICENSE = "PHP-3.01"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dd34a70236f008af999de817b93a5e3a"

DEPENDS = "php imagemagick"
RDEPENDS:${PN} += "imagemagick"

SRC_URI = "https://pecl.php.net/get/imagick-${PV}.tgz"

SRC_URI[md5sum] = "aadbb5ad3db484e19bb6ba39aa2cd4a0"
SRC_URI[sha256sum] = "3a3587c0a524c17d0dad9673a160b90cd776e836838474e173b549ed864352ee"

inherit autotools pkgconfig

# Can't explain, why we need the extra CFLAG for including the ImageMagick-7 folder, but it works...
# Also I don't know why we need to specify the ImageMagick libraries to include to, but it works...
EXTRA_OECONF += "\
    --with-imagick=${STAGING_EXECPREFIXDIR} \
    CFLAGS="-I${STAGING_INCDIR}/ImageMagick-7 -DMAGICKCORE_HDRI_ENABLE=1 -DMAGICKCORE_QUANTUM_DEPTH=64" \
    LIB=-lMagickCore-7.Q16HDRI \
    IMAGICK_SHARED_LIBADD='-lMagickCore-7.Q16HDRI -lMagick++-7.Q16HDRI -lMagickWand-7.Q16HDRI' \
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
