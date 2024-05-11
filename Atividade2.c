#include <stdio.h>

int main()
{
    int matriz[4][4] = {0}, i = 0, j = 0, linhaDaSoma, colunaDaSoma, opcao;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Posicao %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    while (opcao != 5)
    {
        printf("******************************MENU********************************\n");
        printf("1 - Exibir a Matriz completa.\n");
        printf("2 - Exibir os numeros da diagonal primaria e secundaria.\n");
        printf("3 - Exibir soma de uma determinada linha.\n");
        printf("4 - Exibir soma de uma determinada coluna.\n");
        printf("5 - Sair.");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Matriz:\n");
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    printf("%d\t ", matriz[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Diagonal Primaria\n");
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (i == j)
                    {
                        printf("%d\t ", matriz[i][j]);
                    }
                    else
                    {
                        printf(".\t");
                    }
                }
                printf("\n");
            }
            printf("Diagonal Secundaria\n");
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (i + j == 4 - 1)
                    {
                        printf("%d\t ", matriz[i][j]);
                    }
                    else
                    {
                        printf(".\t");
                    }
                }
                printf("\n");
            }
            break;
        case 3:
            for (i = 0; i < 4; i++)
            {
                printf("Linha %d: ", i);
                for (j = 0; j < 4; j++)
                {
                    printf("%d\t ", matriz[i][j]);
                }
                printf("\n", i);
            }
            printf("Defina uma linha para ser somada: ");
            scanf("%d", &linhaDaSoma);

            if (linhaDaSoma >= 0 && linhaDaSoma < 4)
            {

                int somaLinha = 0;
                for (i = 0; i < 4; i++)
                {
                    somaLinha += matriz[linhaDaSoma][i];
                }
                printf("A soma dos elementos da linha %d e: %d\n", linhaDaSoma, somaLinha);
            }
            else
            {
                printf("Linha invalida!\n");
            }
            break;
        case 4:
            printf("Defina uma coluna para ser somada: ");
            scanf("%d", &colunaDaSoma);

            if (colunaDaSoma >= 0 && colunaDaSoma < 4)
            {
                int somaColuna = 0;
                for (i = 0; i < 4; i++)
                {
                    somaColuna += matriz[i][colunaDaSoma];
                }
                printf("A soma dos elementos da coluna %d e: %d\n", colunaDaSoma, somaColuna);
            }
            else
            {
                printf("Coluna invalida!\n");
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    }
    return 0;
}
