#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long CalculaFatorial(int numero)
{
    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    else
    {
        unsigned long long resultado = 1;
        for (int i = 2; i <= numero; i++)
        {
            resultado *= i;
        }
        return resultado;
    }
}
int main()
{
    int numero;
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Erro: Nao e possivel calcular fatorial de um numero negativo.\n");
    }
    else
    {
        unsigned long long resultado = CalculaFatorial(numero);
        printf("O fatorial de %d e: %llu\n", numero, resultado);
    }

    return 0;
}