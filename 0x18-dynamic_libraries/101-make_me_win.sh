#!/bin/bash
wget -O /tmp/win.so https://github.com/YohannesGetu/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD=/tmp/win.so