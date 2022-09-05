#!/bin/bash
wget -q -O /tmp/libtest.so https://github.com/kolaoba/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
