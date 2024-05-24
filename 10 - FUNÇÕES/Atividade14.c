#include <stdio.h>

float MediaPonderada(float nota1, float nota2, float nota3)
{
    float peso1 = 2, peso2 = 3, peso3 = 5;
    float somaPesos = peso1 + peso2 + peso3;
    float mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somaPesos;
    return mediaPonderada;
}

int main()
{
    float nota1, nota2, nota3;
    printf("Digite as tres notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float media = MediaPonderada(nota1, nota2, nota3);
    printf("A media ponderada das notas  e: %.2f.\n", media);

    return 0;
}
