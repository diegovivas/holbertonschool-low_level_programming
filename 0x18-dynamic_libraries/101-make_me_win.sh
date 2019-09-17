#!/bin/bash
wget -P /tmp -q https://raw.githubusercontent.com/diegovivas/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/fuckso.so
export LD_PRELOAD=/tmp/fucks.so
