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
    ARRAY(in,  132);
    for(size_t h = 1; h < 64; h++) {
        for(size_t k = 0; k < 64; k++) {
            crypto_blake2b_general(hash, h, key, k, in, 1);
        }
    }
}

int main(void) {
    p1305();
    blake2b();
    return 0;
}
