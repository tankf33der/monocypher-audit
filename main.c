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
    // XXX increase if you have more RAM
    ARRAY(hash, 16);
    ARRAY(key,  16);
    ARRAY(in,   16);
    for(size_t h = 1; h < sizeof(hash); h++) {
        for(size_t k = 0; k < sizeof(key); k++) {
            for(size_t i = 0; i < sizeof(in); i++) {
                crypto_blake2b_general(hash, h, key, k, in, i);
            }
        }
    }
}

int main(void) {
    p1305();
    blake2b();
    return 0;
}
