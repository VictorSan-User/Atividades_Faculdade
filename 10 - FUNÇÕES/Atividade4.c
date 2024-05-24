#include <stdio.h>
#include <stdlib.h>

void MesConverter(int numeroMes)
{
    if (numeroMes == 1)
    {
        printf("JANEIRO");
    }
    if (numeroMes == 2)
    {
        printf("FEVEREIRO");
    }
    if (numeroMes == 3)
    {
        printf("MARCO");
    }
    if (numeroMes == 4)
    {
        printf("ABRIL");
    }
    if (numeroMes == 5)
    {
        printf("MAIO");
    }
    if (numeroMes == 6)
    {
        printf("JUNHO");
    }
    if (numeroMes == 7)
    {
        printf("JULHO");
    }
    if (numeroMes == 8)
    {
        printf("AGOSTO");
    }
    if (numeroMes == 9)
    {
        printf("SETEMBRO");
    }
    if (numeroMes == 10)
    {
        printf("OUTUBRO");
    }
    if (numeroMes == 11)
    {
        printf("NOVEMBRO");
    }
    if (numeroMes == 12)
    {
        printf("DEZEMBRO");
    }
}

int main()
{
    int numeroMes;

    printf("Digite o mes desejado pelo numero:\n");
    scanf("%d", &numeroMes);

    MesConverter(numeroMes);

    return 0;
}