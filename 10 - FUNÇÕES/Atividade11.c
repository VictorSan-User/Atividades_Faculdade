#include <stdio.h>

int NumeroPerfeito(unsigned long long numero)
{
    unsigned long long somaDivisores = 0;

    for (unsigned long long i = 1; i < numero; i++)
    {
        if (numero % i == 0)
        {
            somaDivisores += i;
        }
    }

    if (somaDivisores == numero)
    {
        return 1; // O número é perfeito
    }
    else
    {
        return 0;
    }
}

int main()
{
    unsigned long long num;

    printf("DIGITE UM NUMERO INTEIRO POSITIVO: ");
    scanf("%llu", &num);

    if (num <= 0)
    {
        printf("Erro: POR FAVOR, DIGITE UM NUMERO INTEIRO POSITIVO.\n");
        return 1;
    }

    if (NumeroPerfeito(num))
    {
        printf("%llu E UM NUMERO PERFEITO.\n", num);
    }
    else
    {
        printf("%llu NAO E UM NUMERO PERFEITO.\n", num);
    }

    return 0;
}
