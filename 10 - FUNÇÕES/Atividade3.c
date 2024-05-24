#include <stdio.h>
#include <stdlib.h>

void FuncaoCrescente(int num1, int num2, int num3)
{
    if (num1 <= num2 && num1 <= num3)
    {
        if (num2 <= num3)
        {
            printf("A ordem crescente e: %d %d %d", num1, num2, num3);
        }
        else
        {
            printf("A ordem crescente e: %d %d %d", num1, num3, num2);
        }
    }
    if (num2 <= num1 && num2 <= num3)
    {
        if (num1 <= num3)
        {
            printf("A ordem crescente e: %d %d %d", num2, num1, num3);
        }
        else
        {
            printf("A ordem crescente e: %d %d %d", num2, num3, num1);
        }
    }
    if (num3 <= num1 && num3 <= num2)
    {
        if (num1 <= num2)
        {
            printf("A ordem crescente e: %d %d %d", num3, num1, num2);
        }
        else
        {
            printf("A ordem crescente e: %d %d %d", num3, num2, num1);
        }
    }
}

int main()
{
    int num1, num2, num3;

    printf("DIGITE 3 NUMEROS INTEIROS: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    FuncaoCrescente(num1, num2, num3);

    return 0;
}