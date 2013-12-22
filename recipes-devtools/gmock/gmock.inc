SUMMARY = "Google C++ Mocking Framework"
AUTHOR = "Ben Gardner"
HOMEPAGE = "http://uncrustify.sourceforge.net/"
BUGTRACKER = "https://github.com/bengardner/uncrustify/issues"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=cbbd27594afd089daa160d3a16dd515a"

INC_PR = "r0"

SRC_URI = "https://googlemock.googlecode.com/files/${BP}.zip"

inherit cmake

# TODO: Fix the native CMake build. There is an issue with AR not found
#BBCLASSEXTEND = "native nativesdk"

do_install() {

    # GMock
    install -d ${D}${includedir}/gmock
    install -v -m 0644 ${S}/include/gmock/*.h ${D}${includedir}/gmock

    install -d ${D}${libdir}
    install -v -m 0644 ${S}/*.a ${D}${libdir}

    # GTest
    install -d ${D}${includedir}/gtest
    install -v -m 0644 ${S}/gtest/include/gtest/*.h ${D}${includedir}/gtest

    install -d ${D}${libdir}
    install -v -m 0644 ${S}/gtest/*.a ${D}${libdir}
}

PROVIDES += "gtest"
