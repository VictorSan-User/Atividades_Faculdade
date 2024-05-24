#include <stdio.h>

void DuracaoExperimento(int segundos)
{
    float horas = segundos / 3600;

    float minutos = (segundos % 3600) / 60;

    float segundos_restantes = segundos % 60;

    printf("%d segundos correspondem a %.2f horas, %.2f minutos, e %.2f segundos", segundos, horas, minutos, segundos_restantes);
}

int main()
{
    int segundos;

    printf("DEFINA, QUANTOS SEGUNDOS DEMOROU O EXPERIMENTO: ");
    scanf("%d", &segundos);

    DuracaoExperimento(segundos);

    return 0;
}