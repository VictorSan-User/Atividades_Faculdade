#include <stdio.h>

void converterSegundos(long segundos, int *horas, int *dias)
{
    const int segundosPorHora = 3600; // 1 hora = 3600 segundos
    const int horasPorDia = 24;       // 1 dia = 24 horas

    *horas = segundos / segundosPorHora;

    *dias = *horas / horasPorDia;

    *horas = *horas % horasPorDia;
}

int main()
{
    long segundos;
    int horas, dias;

    printf("Digite a quantidade de segundos a ser convertida: ");
    scanf("%ld", &segundos);

    converterSegundos(segundos, &horas, &dias);

    printf("%ld segundos equivalem a %d dias e %d horas.\n", segundos, dias, horas);

    return 0;
}
