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
    for(size_t i = 0; i < 44; i++) {
        crypto_poly1305(mac, in, i, key);
    }
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

int main(void) {
    p1305();
    blake2b();
    verify();
    wipe();
    return 0;
}
