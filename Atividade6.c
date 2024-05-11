#include <stdio.h>

int main()
{
    int matriz[5][5];
    int i, j;
    int busca;
    int encontrado = 0; // Flag

    printf("Preencha a matriz 5x5:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o elemento %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Pedindo ao usuário o número a ser pesquisado
    printf("\nDigite o numero que deseja pesquisar na matriz: ");
    scanf("%d", &busca);

    // Pesquisando o número na matriz
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] == busca)
            {
                printf("O numero %d foi encontrado na posicao %d %d da matriz.\n", busca, i + 1, j + 1);
                encontrado = 1; // Altera a flag para indicar que o número foi encontrado
            }
        }
    }

    // Se o número não foi encontrado, exibe uma mensagem
    if (!encontrado)
    {
        printf("O numero %d nao foi encontrado na matriz.\n", busca);
    }

    return 0;
}
