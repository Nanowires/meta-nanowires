SUMMARY = "GStreamer plugins written in Rust"
HOMEPAGE = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE-MIT;md5=b377b220f43d747efdec40d69fcaa69d"

SRC_URI = "git://gitlab.freedesktop.org/gstreamer/gst-plugins-rs.git;name=gst-plugins-rs;branch=0.14;protocol=https"
SRCREV_gst-plugins-rs = "8511071f6518e6df5dcadf8b113a43addd7ea1fe"

S = "${UNPACKDIR}/${PN}-${PV}"

inherit cargo_c pkgconfig meson
inherit cargo-update-recipe-crates
require gstreamer1.0-plugins-rs-workspace-crates.inc
require gstreamer1.0-plugins-rs-crates.inc

DEPENDS += " \
    glib-2.0 \
    gobject-introspection \
    gstreamer1.0 \
    gstreamer1.0-plugins-base \
    cmake-native \
"

EXTRA_OEMESON += "\
    --cross-file ${WORKDIR}/rust-cross.txt \
"

GSTREAMER_VERSION = "0.24"
GTK4_VERSION = "0.10"
GTK_CORE_VERSION = "0.21"

do_configure:prepend() {
    cat > ${WORKDIR}/rust-cross.txt <<EOF
[binaries]
rust = '${STAGING_BINDIR_NATIVE}/rustc'
cargo = '${STAGING_BINDIR_NATIVE}/cargo'
cmake = '${STAGING_BINDIR_NATIVE}/cmake'
EOF

    # Needs to be explicitely called, maybe because of meson
    cargo_common_do_configure

    # gstreamer patches
    sed -i 's#gst = { package = "gstreamer", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst = { package = "gstreamer", path = "../gstreamer-rs/gstreamer", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-allocators = { package = "gstreamer-allocators", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-allocators = { package = "gstreamer-allocators", path = "../gstreamer-rs/gstreamer-allocators", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-analytics = { package = "gstreamer-analytics", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-analytics = { package = "gstreamer-analytics", path = "../gstreamer-rs/gstreamer-analytics", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-app = { package = "gstreamer-app", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-app = { package = "gstreamer-app", path = "../gstreamer-rs/gstreamer-app", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-audio = { package = "gstreamer-audio", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-audio = { package = "gstreamer-audio", path = "../gstreamer-rs/gstreamer-audio", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-base = { package = "gstreamer-base", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-base = { package = "gstreamer-base", path = "../gstreamer-rs/gstreamer-base", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-check = { package = "gstreamer-check", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-check = { package = "gstreamer-check", path = "../gstreamer-rs/gstreamer-check", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-gl = { package = "gstreamer-gl", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-gl = { package = "gstreamer-gl", path = "../gstreamer-rs/gstreamer-gl", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-gl-egl = { package = "gstreamer-gl-egl", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-gl-egl = { package = "gstreamer-gl-egl", path = "../gstreamer-rs/gstreamer-gl/egl", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-gl-wayland = { package = "gstreamer-gl-wayland", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-gl-wayland = { package = "gstreamer-gl-wayland", path = "../gstreamer-rs/gstreamer-gl/wayland", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-gl-x11 = { package = "gstreamer-gl-x11", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-gl-x11 = { package = "gstreamer-gl-x11", path = "../gstreamer-rs/gstreamer-gl/x11", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-net = { package = "gstreamer-net", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-net = { package = "gstreamer-net", path = "../gstreamer-rs/gstreamer-net", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-pbutils = { package = "gstreamer-pbutils", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-pbutils = { package = "gstreamer-pbutils", path = "../gstreamer-rs/gstreamer-pbutils", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-rtp = { package = "gstreamer-rtp", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-rtp = { package = "gstreamer-rtp", path = "../gstreamer-rs/gstreamer-rtp", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-sdp = { package = "gstreamer-sdp", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-sdp = { package = "gstreamer-sdp", path = "../gstreamer-rs/gstreamer-sdp", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-tag = { package = "gstreamer-tag", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-tag = { package = "gstreamer-tag", path = "../gstreamer-rs/gstreamer-tag", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-utils = { package = "gstreamer-utils", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-utils = { package = "gstreamer-utils", path = "../gstreamer-rs/gstreamer-utils", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-video = { package = "gstreamer-video", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-video = { package = "gstreamer-video", path = "../gstreamer-rs/gstreamer-video", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gst-webrtc = { package = "gstreamer-webrtc", git = "https://gitlab.freedesktop.org/gstreamer/gstreamer-rs", branch = "${GSTREAMER_VERSION}", version = "${GSTREAMER_VERSION}" }#gst-webrtc = { package = "gstreamer-webrtc", path = "../gstreamer-rs/gstreamer-webrtc", version = "${GSTREAMER_VERSION}" }#' ${S}/Cargo.toml

    # gtk4 patches
    sed -i 's#gtk = { package = "gtk4", git = "https://github.com/gtk-rs/gtk4-rs", branch = "${GTK4_VERSION}", version = "${GTK4_VERSION}", features = \["v4_6"\]}#gtk = { package = "gtk4", path = "../gtk4-rs/gtk4", version = "${GTK4_VERSION}", features = ["v4_6"]}#' ${S}/Cargo.toml
    sed -i 's#gdk-wayland = { package = "gdk4-wayland", git = "https://github.com/gtk-rs/gtk4-rs", branch = "${GTK4_VERSION}", version = "${GTK4_VERSION}", features = \["v4_4"\]}#gdk-wayland = { package = "gdk4-wayland", path = "../gtk4-rs/gdk4-wayland", version = "${GTK4_VERSION}", features = ["v4_4"]}#' ${S}/Cargo.toml
    sed -i 's#gdk-x11 = { package = "gdk4-x11", git = "https://github.com/gtk-rs/gtk4-rs", branch = "${GTK4_VERSION}", version = "${GTK4_VERSION}", features = \["v4_4"\]}#gdk-x11 = { package = "gdk4-x11", path = "../gtk4-rs/gdk4-x11", version = "${GTK4_VERSION}", features = ["v4_4"]}#' ${S}/Cargo.toml
    sed -i 's#gdk-win32 = { package = "gdk4-win32", git = "https://github.com/gtk-rs/gtk4-rs", branch = "${GTK4_VERSION}", version = "${GTK4_VERSION}", features = \["v4_4"\]}#gdk-win32 = { package = "gdk4-win32", path = "../gtk4-rs/gdk4-win32", version = "${GTK4_VERSION}", features = ["v4_4"]}#' ${S}/Cargo.toml

    # gtk-rs-core patches
    sed -i 's#glib = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#glib = { path = "../gtk-rs-core/glib", version = "${GTK_CORE_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#gio = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#gio = { path = "../gtk-rs-core/gio", version = "${GTK_CORE_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#cairo-rs = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}", features=\["use_glib"\] }#cairo-rs = { path = "../gtk-rs-core/cairo", version = "${GTK_CORE_VERSION}", features=["use_glib"] }#' ${S}/Cargo.toml
    sed -i 's#pango = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#pango = { path = "../gtk-rs-core/pango", version = "${GTK_CORE_VERSION}" }#' ${S}/Cargo.toml
    sed -i 's#pangocairo = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#pangocairo = { path = "../gtk-rs-core/pangocairo", version = "${GTK_CORE_VERSION}" }#' ${S}/Cargo.toml

    # member patches
    sed -i 's#flavors = { git = "https://github.com/rust-av/flavors" }#flavors = { path = "../../../flavors" }#' ${S}/mux/flavors/Cargo.toml
    sed -i 's#ffv1 = { git = "https://github.com/rust-av/ffv1.git", rev = "bd9eabfc14c9ad53c37b32279e276619f4390ab8" }#ffv1 = { path = "../../../ffv1" }#' ${S}/video/ffv1/Cargo.toml
}

do_compile:prepend() {
    # Remove the patches for the manually loaded git repos from the config.toml
    sed -i '/gtk-rs-core/d' ${CARGO_HOME}/config.toml
    sed -i '/gtk4-rs/d' ${CARGO_HOME}/config.toml
    sed -i '/gstreamer-rs/d' ${CARGO_HOME}/config.toml
    sed -i '/flavors/d' ${CARGO_HOME}/config.toml
    sed -i '/ffv1/d' ${CARGO_HOME}/config.toml
    sed -i '/matroska/d' ${CARGO_HOME}/config.toml
}

PACKAGECONFIG ?= "sodium sodium-builtin gtk4"

# Most of the packages are not tested and will most probably fail, because of dependencies
# analytics
PACKAGECONFIG[analytics]   = "-Danalytics=enabled,-Danalytics=disabled,gstreamer-plugins-bad"

# audio
PACKAGECONFIG[audiofx]              = "-Daudiofx=enabled,-Daudiofx=disabled"
PACKAGECONFIG[claxon]               = "-Dclaxon=enabled,-Dclaxon=disabled"
PACKAGECONFIG[csound]               = "-Dcsound=enabled,-Dcsound=disabled"
PACKAGECONFIG[elevenlabs]           = "-Delevenlabs=enabled,-Delevenlabs=disabled"
PACKAGECONFIG[lewton]               = "-Dlewton=enabled,-Dlewton=disabled"
PACKAGECONFIG[spotify]              = "-Dspotify=enabled,-Dspotify=disabled"
PACKAGECONFIG[speechmatics]         = "-Dspeechmatics=enabled,-Dspeechmatics=disabled"

# generic
PACKAGECONFIG[file]                 = "-Dfile=enabled,-Dfile=disabled"
PACKAGECONFIG[originalbuffer]       = "-Doriginalbuffer=enabled,-Doriginalbuffer=disabled"
PACKAGECONFIG[gopbuffer]            = "-Dgopbuffer=enabled,-Dgopbuffer=disabled"
PACKAGECONFIG[sodium]               = "-Dsodium=enabled,-Dsodium=disabled,libsodium"
PACKAGECONFIG[sodium-system]        = "-Dsodium-source=system,-Dsodium-source=built-in,libsodium"
PACKAGECONFIG[sodium-builtin]       = "-Dsodium-source=built-in,-Dsodium-source=system"
PACKAGECONFIG[threadshare]          = "-Dthreadshare=enabled,-Dthreadshare=disabled"
PACKAGECONFIG[inter]                = "-Dinter=enabled,-Dinter=disabled"
PACKAGECONFIG[streamgrouper]        = "-Dstreamgrouper=enabled,-Dstreamgrouper=disabled"

# mux
PACKAGECONFIG[flavors]              = "-Dflavors=enabled,-Dflavors=disabled"
PACKAGECONFIG[fmp4]                 = "-Dfmp4=enabled,-Dfmp4=disabled"
PACKAGECONFIG[mp4]                  = "-Dmp4=enabled,-Dmp4=disabled"

# net
PACKAGECONFIG[aws]                  = "-Daws=enabled,-Daws=disabled"
PACKAGECONFIG[hlsmultivariantsink]  = "-Dhlsmultivariantsink=enabled,-Dhlsmultivariantsink=disabled"
PACKAGECONFIG[hlssink3]             = "-Dhlssink3=enabled,-Dhlssink3=disabled"
PACKAGECONFIG[mpegtslive]           = "-Dmpegtslive=enabled,-Dmpegtslive=disabled"
PACKAGECONFIG[ndi]                  = "-Dndi=enabled,-Dndi=disabled"
PACKAGECONFIG[onvif]                = "-Donvif=enabled,-Donvif=disabled"
PACKAGECONFIG[raptorq]              = "-Draptorq=enabled,-Draptorq=disabled"
PACKAGECONFIG[reqwest]              = "-Dreqwest=enabled,-Dreqwest=disabled"
PACKAGECONFIG[rtsp]                 = "-Drtsp=enabled,-Drtsp=disabled"
PACKAGECONFIG[rtp]                  = "-Drtp=enabled,-Drtp=disabled"
PACKAGECONFIG[webrtc]               = "-Dwebrtc=enabled,-Dwebrtc=disabled"
PACKAGECONFIG[webrtc-livekit]       = "-Dwebrtc-livekit=enabled,-Dwebrtc-livekit=disabled"
PACKAGECONFIG[webrtc-aws]           = "-Dwebrtc-aws=enabled,-Dwebrtc-aws=disabled"
PACKAGECONFIG[webrtchttp]           = "-Dwebrtchttp=enabled,-Dwebrtchttp=disabled"
PACKAGECONFIG[quinn]                = "-Dquinn=enabled,-Dquinn=disabled"

# text
PACKAGECONFIG[textahead]            = "-Dtextahead=enabled,-Dtextahead=disabled"
PACKAGECONFIG[json]                 = "-Djson=enabled,-Djson=disabled"
PACKAGECONFIG[regex]                = "-Dregex=enabled,-Dregex=disabled"
PACKAGECONFIG[textwrap]             = "-Dtextwrap=enabled,-Dtextwrap=disabled"

# utils
PACKAGECONFIG[fallbackswitch]       = "-Dfallbackswitch=enabled,-Dfallbackswitch=disabled"
PACKAGECONFIG[livesync]             = "-Dlivesync=enabled,-Dlivesync=disabled"
PACKAGECONFIG[togglerecord]         = "-Dtogglerecord=enabled,-Dtogglerecord=disabled"
PACKAGECONFIG[tracers]              = "-Dtracers=enabled,-Dtracers=disabled"
PACKAGECONFIG[uriplaylistbin]       = "-Duriplaylistbin=enabled,-Duriplaylistbin=disabled"

# video
PACKAGECONFIG[cdg]                  = "-Dcdg=enabled,-Dcdg=disabled"
PACKAGECONFIG[closedcaption]        = "-Dclosedcaption=enabled,-Dclosedcaption=disabled"
PACKAGECONFIG[dav1d]                = "-Ddav1d=enabled,-Ddav1d=disabled,dav1d"
PACKAGECONFIG[ffv1]                 = "-Dffv1=enabled,-Dffv1=disabled"
PACKAGECONFIG[gif]                  = "-Dgif=enabled,-Dgif=disabled"
PACKAGECONFIG[gtk4]                 = "-Dgtk4=enabled,-Dgtk4=disabled,gtk4"
PACKAGECONFIG[hsv]                  = "-Dhsv=enabled,-Dhsv=disabled"
PACKAGECONFIG[png]                  = "-Dpng=enabled,-Dpng=disabled,libpng"
PACKAGECONFIG[rav1e]                = "-Drav1e=enabled,-Drav1e=disabled"
PACKAGECONFIG[skia]                 = "-Dskia=enabled,-Dskia=disabled"
PACKAGECONFIG[videofx]              = "-Dvideofx=enabled,-Dvideofx=disabled"
PACKAGECONFIG[vvdec]                = "-Dvvdec=enabled,-Dvvdec=disabled"
PACKAGECONFIG[webp]                 = "-Dwebp=enabled,-Dwebp=disabled,libwebp"

# common
PACKAGECONFIG[doc]                  = "-Ddoc=enabled,-Ddoc=disabled"
PACKAGECONFIG[examples]             = "-Dexamples=enabled,-Dexamples=disabled"
PACKAGECONFIG[tests]                = "-Dtests=enabled,-Dtests=disabled"

FILES:${PN}:append = "\
    ${@bb.utils.contains('PACKAGECONFIG','gtk4',' ${libdir}/gstreamer-1.0/libgstgtk4.so','',d)} \
    ${@bb.utils.contains('PACKAGECONFIG','sodium',' ${libdir}/gstreamer-1.0/libgstsodium.so','',d)} \
"

INSANE_SKIP:${PN} += "buildpaths ldflags"
INSANE_SKIP:${PN}-dbg += "buildpaths ldflags"