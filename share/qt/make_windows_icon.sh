#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/sk21.ico

convert ../../src/qt/res/icons/sk21-16.png ../../src/qt/res/icons/sk21-32.png ../../src/qt/res/icons/sk21-48.png ${ICON_DST}
