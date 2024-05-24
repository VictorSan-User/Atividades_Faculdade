#include <stdio.h>

void ConceitoTempo(int IdadeEmDias)
{
    int anos, meses, dias;

    anos = IdadeEmDias / 365;

    int diasRestantes = IdadeEmDias % 365;
    meses = diasRestantes / 30;

    dias = diasRestantes % 30;

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);
}

int main()
{
    int idadeEmDias;

    printf("Digite sua Idade em dias:");
    scanf("%d", &idadeEmDias);

    ConceitoTempo(idadeEmDias);

    return 0;
}