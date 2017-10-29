# mcxcl_jbo_code

* For figure 3(a), thread_vs_blk is used.
* For figure 3(b), multidev is used.

### thread_vs_blk
thread use the default -A 3 -J '-D MCX_USE_NATIVE' option for mcxcl

block scheme adds comptes blocks for each device and calcuates the approximate photons per block 
(not evenly devided by the total photons), then uses local memory to dynamically assign the workloads.


### multidev
for nvidia devices, openmp version is used.

for amd/intel devices, the default mcxcl is used.

All benchmarking are using -A 3 -J '-D MCX_USE_NATIVE' option.

Refer to mcxcl/example/benchmark/(ben1/ben2/ben2a)_native_pilot.sh
