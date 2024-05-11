#include <stdio.h>

int main()
{
    printf("Preencha a matriz 3x3 com numeros inteiros.")
    int matriz[3][3], i = 0, j = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Posicao %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}