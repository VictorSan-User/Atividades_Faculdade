#include <stdio.h>

int main()
{
    int matriz[4][4] = {0};
    int i = 0, j = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Posicao %d %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}