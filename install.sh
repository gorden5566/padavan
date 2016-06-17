#!/bin/sh

# DESTDIR is your target project's dir
DESTDIR=~/github/rt-n56u

ROOTDIR=`pwd`

if [ ! -d "$DESTDIR" ] ; then
	echo "Target project directory not exists! Terminate."
	exit 1
fi

echo "-------------COPY-FILES---------------"

if [ -d "$ROOTDIR/trunk/user/www" ] ; then
	cp -fRv "$ROOTDIR/trunk/user/www" "$DESTDIR/trunk/user"
fi

echo "-------------COPY-END---------------"
