DEPENDS:append = " curl gd gmp freetype libsodium"
DEPENDS:class-native:append = " curl-native"

EXTRA_OECONF += "\
    --enable-bcmath\
    --enable-intl\
    --with-curl=${STAGING_LIBDIR}/..\
    --with-config-file-path=${sysconfdir}/php/fpm-php${PHP_MAJOR_VERSION}\
    --with-gmp=${STAGING_LIBDIR}/..\
    --enable-gd \
    --with-freetype \
    --with-sodium \
    --enable-sysvsem \
    --enable-exif \
"

PACKAGECONFIG += "zip openssl mysql ipv6 opcache"

fakeroot do_after_install() {
}

fakeroot do_after_install:class-target() {
    install -d ${D}${sysconfdir}/php/fpm-php${PHP_MAJOR_VERSION}
    install -m 0644 ${WORKDIR}/php.ini ${D}${sysconfdir}/php/fpm-php${PHP_MAJOR_VERSION}/php.ini
}

do_after_install[depends] += "virtual/fakeroot-native:do_populate_sysroot"

addtask after_install after do_install before do_package

FILES:${PN} += "${sysconfdir}/php/fpm-php${PHP_MAJOR_VERSION}/php.ini"
