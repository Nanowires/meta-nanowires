SUMMARY = "Send push notifications to your phone or desktop via PUT/POST"
DESCRIPTION = "ntfy (pronounce: notify) is a simple HTTP-based pub-sub notification service. It allows you to send notifications to your phone or desktop via scripts from any computer, entirely without signup, cost or setup. It's also open source if you want to run your own."
HOMEPAGE = "https://ntfy.sh/"

LICENSE = "Apache-2.0 & GPL-2.0-only"
LIC_FILES_CHKSUM = "file://LICENSE;md5=8bd107a6957b74a1316cb110b4c19a98 \
                    file://LICENSE.GPLv2;md5=482b84950249f0918b2db94d4ed2abb9"

S = "${WORKDIR}/git"
SRC_URI = "git://github.com/binwiederhier/ntfy;branch=main;protocol=https;destsuffix=${S} \
    file://modules.txt \
    "

SRCREV = "a75fb08ef138d67599499c1f78628a0b35fcef54"
SRCREV_FORMAT = "*"
PV = "v2.3.1+ntfy+git${SRCREV}"

include src_uri.inc

DEPENDS += "rsync-native"

inherit go
#inherit npm

GO_IMPORT = "import"

include relocation.inc

do_compile () {
    export GOPATH="${S}/src/import/vendor:${STAGING_DIR_TARGET}/${prefix}/local/go"
    export CGO_ENABLED="1"
    export GOFLAGS="-mod=vendor"

    TAGS="static_build ctrd no_btrfs netcgo osusergo providerless"

    cd ${S}/src/import

    cp ${WORKDIR}/modules.txt vendor.copy/
    
    #${GO} build -tags "$TAGS" -ldflags "${GO_BUILD_LDFLAGS} -w -s" -o ./dist/artifacts/k3s ./cmd/server/main.go
    
    cd ${S}
    ln -sf src/import/vendor.copy vendor
    # You will almost certainly need to add additional arguments here
    #oe_runmake build
    oe_runmake cli-linux-server
    #oe_runmake web
}

do_install () {
    install -d ${D}${sysconfdir}/ntfy
    install -m 0644 ${S}/server/server.yml ${D}${sysconfdir}/ntfy/server.yml
    
    install -d "${D}${bindir}"
    install -m 755 "${S}/dist/ntfy_linux_server/ntfy" "${D}${bindir}/ntfy"
}

INHIBIT_PACKAGE_STRIP = "1"
INSANE_SKIP:${PN} += "ldflags already-stripped"
