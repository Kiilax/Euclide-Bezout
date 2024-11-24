#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct Bezout
{
    uint32_t a;
    uint32_t b;
    int32_t u;
    int32_t v;
    uint32_t gcd;
} Bezout;

#endif