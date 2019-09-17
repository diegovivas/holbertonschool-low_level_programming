#!/bin/bash
wget --preserve-permissions -q https://github.com/diegovivas/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/fuckso.so -O /tmp/fucks.so
export LD_PRELOAD=tmp/fucks.so
