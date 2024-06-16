#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 100

typedef struct
{
    char nome[MAX_NOME];
    float nota;
} Aluno;

float calcula_media(Aluno *alunos, int num_alunos)
{
    float soma = 0.0;
    for (int i = 0; i < num_alunos; i++)
    {
        soma += alunos[i].nota;
    }
    return soma / num_alunos;
}

int main()
{
    int num_alunos;

    printf("QUAL A QUANTIDADE DE ALUNOS? ");
    scanf("%d", &num_alunos);

    Aluno *alunos = (Aluno *)malloc(num_alunos * sizeof(Aluno));
    if (alunos == NULL)
    {
        printf("404 Error.\n");
        return 1;
    }

    for (int i = 0; i < num_alunos; i++)
    {
        printf("NOME DO ALUNO %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("DIGITE A NOTA DO ALUNO %d: ", i + 1);
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    float media = calcula_media(alunos, num_alunos);
    printf("MEDIA DA TURMA: %.2f\n", media);

    free(alunos);
    return 0;
}
