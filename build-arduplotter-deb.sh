#! /bin/sh

mkdir arduplotter-deb/etc
mkdir arduplotter-deb/etc/arduplotter
cp arduplotter_skel.cfg arduplotter-deb/etc/arduplotter/arduplotter_skel.cfg
cp arduplotter_test_identifier_only.ino arduplotter-deb/etc/arduplotter/arduplotter_test_identifier_only.ino
cp arduplotter_test_query_identifier.ino arduplotter-deb/etc/arduplotter/arduplotter_test_query_identifier.ino
mkdir arduplotter-deb/usr
mkdir arduplotter-deb/usr/bin
cp arduplotter arduplotter-deb/usr/bin/arduplotter
cp arduplotter_test arduplotter-deb/usr/bin/arduplotter_test

dpkg-deb --build arduplotter-deb
