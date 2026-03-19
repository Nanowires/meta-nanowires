# Manually created from the dependencies mentioned in the workspace and members cargo.toml

SRC_URI += " \
    git://github.com/gtk-rs/gtk-rs-core;name=gtk-rs-core;branch=${GTK_CORE_VERSION};protocol=https;destsuffix=gtk-rs-core \
    git://github.com/gtk-rs/gtk4-rs;name=gtk4-rs;branch=0.10;protocol=https;destsuffix=gtk4-rs \
    git://gitlab.freedesktop.org/gstreamer/gstreamer-rs;name=gstreamer-rs;branch=0.24;protocol=https;destsuffix=gstreamer-rs \
    git://github.com/rust-av/flavors;name=flavors;branch=master;protocol=https;destsuffix=flavors \
    git://github.com/rust-av/ffv1;name=ffv1;branch=master;protocol=https;destsuffix=ffv1 \
    git://github.com/rust-av/matroska;name=matroska;branch=master;protocol=https;destsuffix=matroska \
"

SRCREV_gtk-rs-core = "8b654067dcac04ebb3c7cce6a7aa5926155776fa"
SRCREV_gtk4-rs = "ceeaddfd20bbba8acceafba1abf6c7c850273f4c"
SRCREV_gstreamer-rs = "86ec9821ea9c65d9e4d7181fd0d1cb0a449180d4"
SRCREV_flavors = "833508af656d298c269f2397c8541a084264d992"
SRCREV_ffv1 = "bd9eabfc14c9ad53c37b32279e276619f4390ab8"
SRCREV_matroska = "bbb048926d1cae46d7c7194ac9b9ac7c409e5147"

SRCREV_FORMAT = "gtk-rs-core_gtk4-rs_gstreamer-rs_flavors_ffv1_matroska"


do_configure:prepend() {
    # gstreamer patches
    sed -i 's#gio = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#gio = { path = "../gtk-rs-core/gio", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#gio-sys = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#gio-sys = { path = "../gtk-rs-core/gio/sys", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#glib = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#glib = { path = "../gtk-rs-core/glib", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#glib-sys = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#glib-sys = { path = "../gtk-rs-core/glib/sys", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#gobject-sys = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#gobject-sys = { path = "../gtk-rs-core/glib/gobject-sys", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#cairo-rs = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#cairo-rs = { path = "../gtk-rs-core/cairo", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#pango = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#pango = { path = "../gtk-rs-core/pango", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml
    sed -i 's#pangocairo = { git = "https://github.com/gtk-rs/gtk-rs-core", branch = "${GTK_CORE_VERSION}", version = "${GTK_CORE_VERSION}" }#pangocairo = { path = "../gtk-rs-core/pangocairo", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gstreamer-rs/Cargo.toml


    # gtk4 patches
    sed -i 's#cairo-sys-rs = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}"}#cairo-sys-rs = { path = "../gtk-rs-core/cairo/sys", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#cairo-rs = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["use_glib"\]}#cairo-rs = { path = "../gtk-rs-core/cairo", version = "${GTK_CORE_VERSION}", features = ["use_glib"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#gdk-pixbuf-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}"}#gdk-pixbuf-sys = { path = "../gtk-rs-core/gdk-pixbuf/sys/", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#gdk-pixbuf = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}"}#gdk-pixbuf = { path = "../gtk-rs-core/gdk-pixbuf", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#gio-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v2_66"\]}#gio-sys = { path = "../gtk-rs-core/gio/sys", version = "${GTK_CORE_VERSION}", features = ["v2_66"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#gio = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v2_66"\]}#gio = { path = "../gtk-rs-core/gio", version = "${GTK_CORE_VERSION}", features = ["v2_66"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#gobject-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v2_66"\]}#gobject-sys = { path = "../gtk-rs-core/glib/gobject-sys", version = "${GTK_CORE_VERSION}", features = ["v2_66"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#glib-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v2_66"\]}#glib-sys = { path = "../gtk-rs-core/glib/sys", version = "${GTK_CORE_VERSION}", features = ["v2_66"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#glib = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v2_66"\]}#glib = { path = "../gtk-rs-core/glib", version = "${GTK_CORE_VERSION}", features = ["v2_66"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#graphene-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}"}#graphene-sys = { path = "../gtk-rs-core/graphene/sys", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#graphene = {package = "graphene-rs", git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}"}#graphene = { package = "graphene-rs", path = "../gtk-rs-core/graphene", version = "${GTK_CORE_VERSION}" }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#pango-sys = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v1_46"\]}#pango-sys = { path = "../gtk-rs-core/pango/sys", version = "${GTK_CORE_VERSION}", features = ["v1_46"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml
    sed -i 's#pango = {git = "https://github.com/gtk-rs/gtk-rs-core", version = "${GTK_CORE_VERSION}", branch = "${GTK_CORE_VERSION}", features = \["v1_46"\]}#pango = { path = "../gtk-rs-core/pango", version = "${GTK_CORE_VERSION}", features = ["v1_46"] }#' ${UNPACKDIR}/gtk4-rs/Cargo.toml

}

### Adjusted the cargo-update-recipe-crates, to search also child directories

CARGO_LOCK_SRC_DIR = "${UNPACKDIR}"

do_update_crates() {
    TARGET_FILE="${THISDIR}/${BPN}-crates.inc"

    nativepython3 - <<EOF

def get_crates(f):
    import tomllib
    c_list = '# from %s' % os.path.relpath(f, '${CARGO_LOCK_SRC_DIR}')
    c_list += '\nSRC_URI += " \\\'
    crates = tomllib.load(open(f, 'rb'))

    # Build a list with crates info that have crates.io in the source
    crates_candidates = list(filter(lambda c: 'crates.io' in c.get('source', ''), crates['package']))

    if not crates_candidates:
        raise ValueError("Unable to find any candidate crates that use crates.io")

    # Update crates uri and their checksum, to avoid name clashing on the checksum
    # we need to rename crates with name and version to have a unique key
    cksum_list = ''
    for c in crates_candidates:
        rename = "%s-%s" % (c['name'], c['version'])
        c_list += '\n    crate://crates.io/%s/%s \\\' % (c['name'], c['version'])
        if 'checksum' in c:
            cksum_list += '\nSRC_URI[%s.sha256sum] = "%s"' % (rename, c['checksum'])

    c_list += '\n"\n'
    c_list += cksum_list
    c_list += '\n'
    return c_list

def search(path):
    global crates
    found = False
    for root, dirs, files in os.walk(path):
        # ignore git and patches directories
        if root.startswith(os.path.join(path, '.pc')):
            continue
        if root.startswith(os.path.join(path, '.git')):
            continue
        for file in files:
            if file == 'Cargo.lock':
                try:
                    cargo_lock_path = os.path.join(root, file)
                    crates += get_crates(os.path.join(root, file))
                except Exception as e:
                    raise ValueError("Cannot parse '%s'" % cargo_lock_path) from e
                else:
                    found = True
    return found

import os
crates = "# Autogenerated with 'bitbake -c update_crates ${PN}'\n\n"
found = False

for dir in os.listdir('${CARGO_LOCK_SRC_DIR}'):
    if dir == 'cargo_home':
        continue
    print(os.path.join('${CARGO_LOCK_SRC_DIR}', dir))
    new_found = search(os.path.join('${CARGO_LOCK_SRC_DIR}', dir))
    found = found or new_found

if not found:
    raise ValueError("Unable to find any Cargo.lock in ${CARGO_LOCK_SRC_DIR}")
open("${TARGET_FILE}", 'w').write(crates)
EOF

    bbnote "Successfully update crates inside '${TARGET_FILE}'"
}