May.2020
```
BLAKE
$ ./a.out.e-acsl
/tmp/e_acsl_defaulte30291.i: In function 'crypto_blake2b_update'
/tmp/e_acsl_defaulte30291.i:8097: Error: RTE failed:
    The failing predicate is:
        signed_downcast: (size_t)__gen_e_acsl__2 <= 2147483647.
        Aborted (core dumped)

POLY
$ ./a.out.e-acsl
/tmp/e_acsl_defaultfda026.i: In function 'crypto_poly1305_update'
/tmp/e_acsl_defaultfda026.i:2458: Error: RTE failed:
	The failing predicate is:
	signed_downcast: (size_t)__gen_e_acsl__2 <= 2147483647.
Aborted (core dumped)

VERIFY
$ ./a.out.e-acsl
/tmp/e_acsl_defaultab2401.i: In function 'neq0'
/tmp/e_acsl_defaultab2401.i:1339: Error: Assertion failed:
	The failing predicate is:
	rte: unsigned_overflow: 0 <= half - 1.
Aborted (core dumped)

CHACHA
$ ./a.out.e-acsl
/tmp/e_acsl_default422a24.i: In function 'chacha20_rounds'
/tmp/e_acsl_default422a24.i:1481: Error: Assertion failed:
	The failing predicate is:
	rte: unsigned_overflow: t8 + t12 <= 4294967295.
Aborted (core dumped)

ARGON
$ ./a.out.e-acsl
/tmp/e_acsl_defaultc87a20.i: In function 'crypto_blake2b_update'
/tmp/e_acsl_defaultc87a20.i:8097: Error: RTE failed:
	The failing predicate is:
	signed_downcast: (size_t)__gen_e_acsl__2 <= 2147483647.
Aborted (core dumped)

PUBKEY_SIGN_CHECK
$ ./a.out.e-acsl
/tmp/e_acsl_default81f179.i: In function 'crypto_blake2b_general_init'
/tmp/e_acsl_default81f179.i:8054: Error: Assertion failed:
    The failing predicate is:
        rte: mem_access: \valid(&ctx->hash[i]).
        Aborted (core dumped)

KEY_EXCHANGE ?
$ ./a.out.e-acsl
/tmp/e_acsl_defaultbe0bab.i: In function 'chacha20_rounds'
/tmp/e_acsl_defaultbe0bab.i:1477: Error: Assertion failed:
    The failing predicate is:
        rte: unsigned_overflow: t0 + t4 <= 4294967295.
        Aborted (core dumped)


from-eddsa
$ ./a.out.e-acsl
/tmp/e_acsl_default78bdce.i: In function 'crypto_blake2b_update'
/tmp/e_acsl_default78bdce.i:8097: Error: RTE failed:
    The failing predicate is:
        signed_downcast: (size_t)__gen_e_acsl__2 <= 2147483647.
        Aborted (core dumped)

hidden
/tmp/e_acsl_default8001a2.i: In function 'neq0'
/tmp/e_acsl_default8001a2.i:1337: Error: Assertion failed:
    The failing predicate is:
        rte: unsigned_downcast: diff <= 4294967295.
        Aborted (core dumped)

Hchacha
$ ./a.out.e-acsl
/tmp/e_acsl_default9dc1f9.i: In function 'chacha20_rounds'
/tmp/e_acsl_default9dc1f9.i:1481: Error: Assertion failed:
    The failing predicate is:
        rte: unsigned_overflow: t8 + t12 <= 4294967295.
        Aborted (core dumped)

WIPE - ok
X25519 - ok


dirty
$ ./a.out.e-acsl
/tmp/e_acsl_defaultf182e1.i: In function 'crypto_x25519_dirty_small'
/tmp/e_acsl_defaultf182e1.i:24889: Error: Assertion failed:
    The failing predicate is:
        rte: unsigned_downcast: (int)((int)*(secret_key + 0) * 5) <= 255.
        Aborted (core dumped)

inverse
$ ./a.out.e-acsl
/tmp/e_acsl_default7b3e5b.i: In function 'multiply'
/tmp/e_acsl_default7b3e5b.i:25194: Error: Assertion failed:
    The failing predicate is:
        rte: unsigned_downcast: carry <= 4294967295.
        Aborted (core dumped)
```
