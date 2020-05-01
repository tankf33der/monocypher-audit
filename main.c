#include <stdlib.h>
#include <stdio.h>
#include "monocypher.h"

#define ARRAY(name, size) \
    uint8_t name[size]; \
    for(size_t i = 0; i < size; i++) name[i] = 123;

void p1305(void) {
    ARRAY(mac, 16);
    ARRAY(key, 32);
    for(size_t i = 0; i < 32; i++) {
        crypto_poly1305(mac, key, i, key);
    }
}

int main(void) {
    p1305();
    return 0;
}
