#include <stdio.h>

void CalculoConceito(float notaTotal)
{
    if (notaTotal < 49.90)
    {
        printf("Conceito D");
    }
    else if (notaTotal > 50 && notaTotal < 69.90)
    {
        printf("Conceito C");
    }
    else if (notaTotal > 70 && notaTotal < 89.90)
    {
        printf("Conceito B");
    }
    else if (notaTotal > 90 && notaTotal <= 100)
    {
        printf("Conceito A");
    }
}

int main()
{
    float nota1, nota2, nota3, nota4, notaTotal;

    printf("Digite quatro notas (Entre 0 e 25):");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);

    notaTotal = nota1 + nota2 + nota3 + nota4;
    CalculoConceito(notaTotal);

    return 0;
}