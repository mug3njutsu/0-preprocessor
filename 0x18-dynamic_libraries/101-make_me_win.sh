#!/bin/bash
wget -P /tmp https://github.com/mug3njutsu/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD=/tmp/libruin.so
