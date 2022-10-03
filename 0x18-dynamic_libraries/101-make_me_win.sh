#!/bin/bash
wget -P /tmp https://github.com/mug3njutsu/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/libruin.so
export LD_PRELOAD=/tmp/libruin.so
