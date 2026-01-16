SUMMARY = "BorgBackup (short: Borg) is a deduplicating backup program."
DESCRIPTION = "The main goal of Borg is to provide an efficient and secure way to backup data. The data deduplication technique used makes Borg suitable for daily backups since only changes are stored. The authenticated encryption technique makes it suitable for backups to not fully trusted targets."
HOMEPAGE = "https://www.borgbackup.org"
LICENSE = "CLOSED"

SRC_URI = "https://github.com/borgbackup/borg/releases/download/${PV}/borg-linux-glibc236"
SRC_URI[sha256sum] = "38f148d54e8db2855a7b0f1d7f744fc25c8da82b573e2d550b2deac813a66207"

S = "${UNPACKDIR}"

do_install() {
    install -d ${D}${bindir}

    install ${UNPACKDIR}/borg-*  ${D}${bindir}/borg
}

# Ignore the "already-stripped" and "file-rdeps" QA error, as this is a prebuild binary
INSANE_SKIP:${PN} += "already-stripped file-rdeps"
