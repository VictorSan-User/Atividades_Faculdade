#include <stdio.h>
#include <stdlib.h>

const int MaiorNumero(int num1, int num2, int num3)
{
    int maior = num1;

    if (num2 > maior)
    {
        maior = num2;
    }
    else if (num3 > maior)
    {
        maior = num3;
    }

    return maior;
}

int main()
{
    int num1, num2, num3, maior;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    maior = MaiorNumero(num1, num2, num3);
    printf("O maior numero entre os tres e: %d", maior);

    return 0;
}