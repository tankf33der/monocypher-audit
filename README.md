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
```
