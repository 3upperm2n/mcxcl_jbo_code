#!/bin/sh

../../bin/mcxcl -A 3 -J '-D MCX_USE_NATIVE' -f benchmark1.json -b 1 -P '{"Shapes":[{"Sphere":   {"Tag":2, "O":[30,30,30],"R":15}}]}' -s benchmark2 -k ../../src/mcx_core.cl  "$@"
