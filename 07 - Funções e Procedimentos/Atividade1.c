#include <stdio.h>

void intercalar(int v1[], int v2[], int v3[], int tamanho)
{
    int i = 0, j = 0, k = 0;

    while (i < tamanho && j < tamanho)
    {
        if (v1[i] < v2[j])
        {
            v3[k++] = v1[i++];
        }
        else
        {
            v3[k++] = v2[j++];
        }
    }

    while (i < tamanho)
    {
        v3[k++] = v1[i++];
    }

    while (j < tamanho)
    {
        v3[k++] = v2[j++];
    }
}

int main()
{
    int v1[] = {1, 3, 5, 5, 7, 9, 10};
    int v2[] = {2, 2, 4, 6, 8, 8, 10};
    int tamanho = sizeof(v1) / sizeof(v1[0]);
    int v3[2 * tamanho];

    intercalar(v1, v2, v3, tamanho);

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 2 * tamanho; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
