#include <stdlib.h>
#include <stdio.h>
#include "monocypher.h"

typedef uint8_t u8;

#define ARRAY(name, size) \
    u8 name[size]; \
    for(size_t i = 0; i < size; i++) name[i] = 123;

void p1305(void) {
    ARRAY(mac, 16);
    ARRAY(key, 32);
    ARRAY(in,  44);
    crypto_poly1305(mac, in, 44, key);
}

void blake2b(void) {
    ARRAY(hash, 64);
    ARRAY(key,  64);
    ARRAY(in,  129);
    crypto_blake2b_general(hash, 64, key, 64, in, 129);
}

void verify(void) {
    ARRAY(a, 64);
    ARRAY(b, 64);
    crypto_verify16(a, b);
    crypto_verify32(a, b);
    crypto_verify64(a, b);
}

void wipe(void) {
    ARRAY(a, 64);
    crypto_wipe(a, 64);
}

void lock_unlock(void) {
    ARRAY(mac,   16);
    ARRAY(enc,   64);
    ARRAY(txt,   64);
    ARRAY(key,   32);
    ARRAY(nonce, 24);
    crypto_lock  (mac, enc, key, nonce, txt, 64);
    crypto_unlock(txt, key, nonce, mac, enc, 64);
}

void argon(void) {
    ARRAY(hash, 16);
    ARRAY(wrk, 16384); // 16 * 1024
    ARRAY(pwd, 16);
    ARRAY(key, 16);
    ARRAY(slt, 16);
    ARRAY(ad,  16);
    crypto_argon2i_general(hash, 16, wrk, 16, 3, pwd, 16, slt, 16, key, 16, ad, 16);
}

void key_exchange(void) {
    ARRAY(shd, 32);
    ARRAY(key, 32);
    crypto_key_exchange(shd, key, key);
}

void sign_check(void) {
    ARRAY(hash, 64);
    ARRAY(key,  32);
    ARRAY(pub,  32);
    ARRAY(in,   32);
    crypto_sign_public_key(pub, key);
    crypto_sign(hash, key, pub, in, 32);
    crypto_check(hash, pub, in, 32);
}

void from_eddsa(void) {
    ARRAY(shr, 32);
    ARRAY(key, 32);
    ARRAY(pub, 32);
    crypto_from_eddsa_private(shr, key);
    crypto_sign_public_key(pub, key);
    crypto_from_eddsa_public(shr, pub);
}

int main(void) {
    p1305();
    blake2b();
    verify();
    wipe();
    lock_unlock();
    argon();
    key_exchange();
    sign_check();
    from_eddsa();
    return 0;
}
