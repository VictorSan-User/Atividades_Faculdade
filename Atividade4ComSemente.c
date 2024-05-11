#include <stdio.h>
#include <stdlib.h> // Incluindo a biblioteca para as funções de números aleatórios

int main()
{
    // i=meses e j=semanas
    float MatrizVendas[12][4] = {0};
    float VendasMes = 0, VendasSemana = 0, VendasAno = 0;
    int i, j;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    printf("**************************CONTROLE DE VENDAS*************************\n");

    // Preenchendo a matriz de vendas com valores aleatórios entre 1000 e 5000
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 4; j++)
        {
            MatrizVendas[i][j] = rand() % 4001 + 1000; // Gerando valores entre 1000 e 5000
            printf("Total vendido da semana %d do mes %d: %.2f\n", j + 1, i + 1, MatrizVendas[i][j]);

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
