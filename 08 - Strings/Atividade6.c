#include <stdio.h>

int exercito()
{
    char genero;
    int idade;

    printf("Qual seu genero? (M/F):");
    scanf(" %c", &genero);

    if (genero == 'M' || genero == 'm')
    {
        printf("Qual a sua idade?");
        scanf("%d", &idade);
        if (idade >= 18)
        {
            printf("Voce tera de se alistar, seu imundo!");
        }
    }
    else
    {
        printf("Voce nao precisa se alistar!");
    }
    return 0;
}

int main()
{
    exercito();

    return 0;
}