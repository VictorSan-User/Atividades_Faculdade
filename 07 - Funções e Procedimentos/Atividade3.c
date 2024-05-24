#include <stdio.h>

// Função para calcular a média de 4 notas
float calcularMedia(float nota1, float nota2, float nota3, float nota4)
{
    return (nota1 + nota2 + nota3 + nota4) / 4.0;
}

// Função para determinar o status do aluno com base na média
void determinarStatus(float media)
{
    if (media >= 7.0)
    {
        printf("Aprovado\n");
    }
    else if (media >= 4.0)
    {
        printf("Exame especial\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}

int main()
{
    float nota1, nota2, nota3, nota4;

    printf("Digite as 4 notas finais do aluno:\n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    float media = calcularMedia(nota1, nota2, nota3, nota4);

    printf("Media: %.2f\n", media);
    printf("Status do aluno: ");
    determinarStatus(media);

    return 0;
}
