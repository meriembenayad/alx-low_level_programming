#!/bin/bash
wget -P /tmp https://github.com/meriembenayad/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
LD_PRELOAD=/tmp/libgiga/so
