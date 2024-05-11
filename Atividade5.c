#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j;
    int maiorValor; // Não é necessário inicializar aqui, será feita durante a leitura
    int linhaMaior, colunaMaior;

    // Preenchendo a matriz
    printf("Preencha a matriz 4x4:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o elemento %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            // Inicializa maiorValor com o primeiro elemento da matriz
            if (i == 0 && j == 0)
            {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }

            // Verifica se o elemento atual é o maior encontrado até agora
            if (matriz[i][j] > maiorValor)
            {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz inserida:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimindo a localização do maior valor
    printf("\nO maior valor encontrado foi %d, na linha %d e coluna %d.\n", maiorValor, linhaMaior + 1, colunaMaior + 1);

    return 0;
}
