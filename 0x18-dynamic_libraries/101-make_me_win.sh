#!/bin/bash
wget -q https://raw.githubusercontent.com/diegovivas/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/fuckso.so -O /tmp/fuckso.so
export LD_PRELOAD=/tmp/fuckso.so
