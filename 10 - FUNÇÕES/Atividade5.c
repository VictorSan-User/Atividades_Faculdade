#include <stdio.h>
#include <stdlib.h>

const int CalculadoraMedia(int num1, int num2, int num3, int num4)
{
    float media = num1 + num2 + num3 + num4;

    media = media / 4;

    return media;
}

int main()
{
    int num1, num2, num3, num4;
    float media;

    printf("Digite as 4 notas do aluno(Entre 0 e 10):\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    media = CalculadoraMedia(num1, num2, num3, num4);
    printf("A media desse aluno foi: %.2f", media);

    return 0;
}