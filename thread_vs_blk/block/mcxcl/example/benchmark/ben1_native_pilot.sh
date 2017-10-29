#!/bin/sh

../../bin/mcxcl -A 3 -J '-D MCX_USE_NATIVE' -f benchmark1.json -k ../../src/mcx_core.cl -b 0 "$@"
