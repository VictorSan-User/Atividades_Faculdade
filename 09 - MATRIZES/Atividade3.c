#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i, j;
    int soma = 0;

    printf("Preencha a matriz 3x3 com inteiros:\n");

    // Preenchendo a matriz
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma dos elementos
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }

    // Exibindo a matriz e a soma
    printf("Matriz inserida:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma da matriz: %d\n", soma);
    if (soma == 9)
    {
        printf("Voce acertou!");
    }
    else
    {
        printf("Nao conseguiu");
    }

    return 0;
}
