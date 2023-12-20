do_install:preppend() {
    # Enable histroy search for PageUp and PageDown
    sed -i 's/# "\e[5~": history-search-backward/"\e[5~": history-search-backward/g' ${D}${sysconfdir}/nginx/myhttps.d/nextcloud.conf
    sed -i 's/# "\e[6~": history-search-forward/"\e[6~": history-search-forward/g' ${D}${sysconfdir}/nginx/myhttps.d/nextcloud.conf
}
