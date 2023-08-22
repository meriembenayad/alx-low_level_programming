#!/bin/bash
wget -P https://github.com/meriembenayad/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
LD_PRELOAD=libgiga/so
