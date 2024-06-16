#include <stdio.h>

int main()
{

    int i = 42;
    float f = 3.14;
    char c = 'A';
    double d = 6.2832;


    int *pI = &i;
    float *pF = &f;
    char *pC = &c;
    double *pD = &d;


    printf("Valor de i: %d, Valor apontado por pInt: %d\n", i, *pI);
    printf("Valor de f: %.2f, Valor apontado por pFloat: %.2f\n", f, *pF);
    printf("Valor de c: %c, Valor apontado por pChar: %c\n", c, *pC);
    printf("Valor de d: %.4f, Valor apontado por pDouble: %.4f\n", d, *pD);

    return 0;
}
