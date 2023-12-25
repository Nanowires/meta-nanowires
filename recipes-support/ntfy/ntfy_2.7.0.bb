SUMMARY = "Send push notifications to your phone or desktop via PUT/POST"
DESCRIPTION = "ntfy (pronounce: notify) is a simple HTTP-based pub-sub notification service. It allows you to send notifications to your phone or desktop via scripts from any computer, entirely without signup, cost or setup. It's also open source if you want to run your own."
HOMEPAGE = "https://ntfy.sh/"

LICENSE = "Apache-2.0 & GPL-2.0-only"
LIC_FILES_CHKSUM = "file://src/import/LICENSE;md5=8bd107a6957b74a1316cb110b4c19a98 \
                    file://src/import/LICENSE.GPLv2;md5=482b84950249f0918b2db94d4ed2abb9"

SRC_URI = "git://github.com/binwiederhier/ntfy;branch=main;protocol=https;name=${BPN} \
    file://modules.txt \
    "

SRCREV = "2f0ec88f40418660e5b99a7ad589d661d8c4ff6f"
SRCREV_FORMAT = "ntfy"
PV = "v2.7.0+ntfy+git${SRCREV}"

include src_uri.inc

DEPENDS += "rsync-native"

inherit go
#inherit npm

GO_IMPORT = "import"

include relocation.inc

do_compile () {
    export GOPATH="${S}/src/import/.gopath:${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
    export CGO_ENABLED="1"
    export GOFLAGS="-mod=vendor"

    # TAGS="static_build ctrd no_btrfs netcgo osusergo providerless"
	TAGS="static_build netcgo osusergo providerless"

    cd ${S}/src/import

	if ! [ -e vendor/.noclobber ]; then
            ln -sf vendor.copy vendor
	else
	    echo "[INFO]: no clobber on vendor"
	fi

    cp ${WORKDIR}/modules.txt vendor/
    
    #${GO} build -tags "$TAGS" -ldflags "${GO_BUILD_LDFLAGS} -w -s" -o ./dist/artifacts/k3s ./cmd/server/main.go
    
    cd ${S}/src/import
    # You will almost certainly need to add additional arguments here
    #oe_runmake build
    oe_runmake cli-linux-server
    #oe_runmake web
}

do_install () {
    install -d ${D}${sysconfdir}/ntfy
    install -m 0644 ${S}/src/import/server/server.yml ${D}${sysconfdir}/ntfy/server.yml
    
    install -d "${D}${bindir}"
    install -m 755 "${S}/src/import/dist/ntfy_linux_server/ntfy" "${D}${bindir}/ntfy"
}

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped"
