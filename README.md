Lets create something usefull to use Frama-C and CompCert over Monocypher.


```
-machdep x86_16
-machdep x86_32
-machdep x86_64
```

```
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main p1305 *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main blake2b *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main verify *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main wipe *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main lock_unlock *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main argon *.c
frama-c -eva -eva-precision 11 -eva-builtins-auto -memexec-all -no-val-show-progress -main sign_check *.c
```

```
$ e-acsl-gcc.sh -c -msegment,bittree *.c
```


```
TODO: add optional and pass --rte=all via e-acsl-gcc.sh
```
