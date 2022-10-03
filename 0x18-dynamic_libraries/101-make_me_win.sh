#!/bin/bash
gcc *o -shared -o win.so
export LD_PRELOAD=win.so
