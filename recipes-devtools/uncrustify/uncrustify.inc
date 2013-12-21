SUMMARY = "Code beautifier"
AUTHOR = "Ben Gardner"
HOMEPAGE = "http://uncrustify.sourceforge.net/"
BUGTRACKER = "https://github.com/bengardner/uncrustify/issues"
SECTION = "console/utils"
LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=94d55d512a9ba36caa9b7df079bae19f \
                    file://AUTHORS;md5=b5e007100944ed69a4bcb4e38af9ee5e"

INC_PR = "r0"

SRC_URI = "https://github.com/bengardner/uncrustify/archive/uncrustify-${PV}.zip"

S = "${WORKDIR}/uncrustify-uncrustify-${PV}"

inherit autotools

BBCLASSEXTEND = "native nativesdk"
