SUMMARY = "Send push notifications to your phone or desktop via PUT/POST"
DESCRIPTION = "ntfy (pronounce: notify) is a simple HTTP-based pub-sub notification service. It allows you to send notifications to your phone or desktop via scripts from any computer, entirely without signup, cost or setup. It's also open source if you want to run your own."
HOMEPAGE = "https://ntfy.sh/"

LICENSE = "Apache-2.0 & GPL-2.0-only"
LIC_FILES_CHKSUM = "file://src/${GO_IMPORT}/LICENSE;md5=8bd107a6957b74a1316cb110b4c19a98 \
                    file://src/${GO_IMPORT}/LICENSE.GPLv2;md5=482b84950249f0918b2db94d4ed2abb9"

SRC_URI = "git://github.com/binwiederhier/ntfy;branch=main;protocol=https;name=${BPN};destsuffix=${GO_SRCURI_DESTSUFFIX} \
    file://modules.txt \
    "

SRCREV = "b531bc95ea9faedf68c5b3987f2744df0960384d"
SRCREV_FORMAT = "ntfy"
PV = "v2.15.0+ntfy+git"

GO_IMPORT = "github.com/binwiederhier/ntfy"

DEPENDS += "rsync-native"

include src_uri.inc
include relocation.inc

inherit go-mod

do_compile() {
    export CGO_ENABLED="1"
    export GOFLAGS="-mod=vendor"

    TAGS="static_build netcgo osusergo providerless"

	if ! [ -e vendor/.noclobber ]; then
            ln -sf vendor.copy vendor
	else
	    echo "[INFO]: no clobber on vendor"
	fi

    cp ${UNPACKDIR}/modules.txt vendor/

    oe_runmake cli-linux-server
}

do_install() {
    install -d ${D}${sysconfdir}/ntfy
    install -m 0644 ${S}/src/${GO_IMPORT}/server/server.yml ${D}${sysconfdir}/ntfy/server.yml
    
    install -d "${D}${bindir}"
    install -m 755 "${S}/src/${GO_IMPORT}/dist/ntfy_linux_server/ntfy" "${D}${bindir}/ntfy"
}

#INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped buildpaths"
