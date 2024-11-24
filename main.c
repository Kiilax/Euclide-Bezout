#include "main.h"

uint32_t doEuclide(uint32_t a, uint32_t b)
{
    uint32_t r = a % b;

    if (r != 0)
    {
        return doEuclide(b, r);
    }
    return b;
}

Bezout doBezout(uint32_t a, uint32_t b)
{
    if (a < b)
    {
        uint32_t tempA = a;
        a = b;
        b = tempA;
    }

    uint32_t r = doEuclide(a, b);

    Bezout res;
    res.a = a;
    res.b = b;
    res.gcd = r;
    res.u = 0;
    res.v = 0;

    return res;
}

int main(int argc, char *argv[])
{
    Bezout bez = doBezout(216, 420);
    printf("Pour a = %d et b = %d le pgcd est %d\n", bez.a, bez.b, bez.gcd);
    return 0;
}