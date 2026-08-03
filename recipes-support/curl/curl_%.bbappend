# The default package config
PACKAGECONFIG = "${COMMON_PACKAGECONFIG} ${@bb.utils.filter('DISTRO_FEATURES', 'ipv6', d)} aws libidn"

# Add nghttp2 for nextcloud internet connectivity
PACKAGECONFIG += " nghttp2"