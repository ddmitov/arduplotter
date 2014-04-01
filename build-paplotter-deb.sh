#! /bin/sh

mkdir paplotter-deb/etc
mkdir paplotter-deb/etc/paplotter
cp paplotter_skel.cfg paplotter-deb/etc/paplotter/paplotter_skel.cfg
cp paplotter_test_identifier_only.ino paplotter-deb/etc/paplotter/paplotter_test_identifier_only.ino
cp paplotter_test_query_identifier.ino paplotter-deb/etc/paplotter/paplotter_test_query_identifier.ino
mkdir paplotter-deb/usr
mkdir paplotter-deb/usr/bin
cp paplotter paplotter-deb/usr/bin/paplotter
cp paplotter_test paplotter-deb/usr/bin/paplotter_test

dpkg-deb --build paplotter-deb
