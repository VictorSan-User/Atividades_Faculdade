#include <stdio.h>

int soma_vetor(int *vetor, int tamanho)
{
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += *(vetor + i);
    }
    return soma;
}

int main()
{
    int tamanho;

    printf("VETOR DE TAMANHO: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("PREENCHA O VETOR NAS POSICOES CORRESPONDENTES:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("POSICAO %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int soma = soma_vetor(vetor, tamanho);

    printf("A SOMA DOS ELEMENTOS INSERIDOS SERA: %d\n", soma);

    return 0;
}
