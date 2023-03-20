#!/bin/bash
wget -P /tmp https://github.com/olubunday/alx-low_level_programming/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
