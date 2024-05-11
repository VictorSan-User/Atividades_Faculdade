#include <stdio.h>

int main()
{
    // i=meses e j=semanas
    float MatrizVendas[12][4] = {0};
    float VendasMes = 0, VendasSemana = 0, VendasAno = 0;
    int i, j;

    printf("**************************CONTROLE DE VENDAS*************************\n");

    // Preenchendo minha matriz de vendas
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Total vendido da semana %d do mes %d: ", j + 1, i + 1);
            scanf("%f", &MatrizVendas[i][j]);

            // Somando vendas semanais
            VendasSemana += MatrizVendas[i][j];
        }

        // Calculando vendas mensais
        VendasMes = 0; // Zerando o valor a cada mês
        for (j = 0; j < 4; j++)
        {
            VendasMes += MatrizVendas[i][j];
        }
        printf("**********************O RESULTADO MENSAL FOI: %.2f*******************\n", VendasMes);

        // Somando vendas anuais
        VendasAno += VendasMes;
    }

    printf("**********************O RESULTADO ANUAL FOI: %.2f*******************\n", VendasAno);
    printf("**********************O RESULTADO SEMANAL FOI: %.2f*******************\n", VendasSemana);

    return 0;
}
