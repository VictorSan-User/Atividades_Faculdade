#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct pessoa
{
    char vetorNome[50];
    float altura;
    float peso;
    float resultadoIMC;
};

int main()
{
    struct pessoa p1, p2, p3, p4, p5;
    int i = 0;
    float resultadoIMC;

    // pessoa 1

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", &p1.vetorNome[i]);

    printf("Qual a altura da pessoa(em metros): ");
    scanf("%f", &p1.altura);

    printf("Informe seu peso(em quilos): ");
    scanf("%f", &p1.peso);

    p1.resultadoIMC = p1.peso / (p1.altura * p1.altura);
    resultadoIMC = p1.resultadoIMC;
    printf("O IMC desta pessoa e: %.2f\n", resultadoIMC);

    if (p1.resultadoIMC < 18.5)
    {
        printf("Abaixo do peso!\n");
        printf("====================================================\n");
    }
    else if (p1.resultadoIMC > 18.5 && p1.resultadoIMC < 24.9)
    {
        printf("Peso normal\n");
        printf("====================================================\n");
    }
    else if (p1.resultadoIMC > 25 && p1.resultadoIMC < 29.9)
    {
        printf("Sobrepeso\n");
        printf("====================================================\n");
    }
    else if (p1.resultadoIMC >= 30)
    {
        printf("Obesidade\n");
        printf("====================================================\n");
    }

    // pessoa 2
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", &p2.vetorNome[i]);

    printf("Qual a altura da pessoa(em metros): ");
    scanf("%f", &p2.altura);

    printf("Informe seu peso(em quilos): ");
    scanf("%f", &p2.peso);

    p2.resultadoIMC = p2.peso / (p2.altura * p2.altura);
    resultadoIMC = p2.resultadoIMC;
    printf("O IMC desta pessoa e: %.2f\n", resultadoIMC);

    if (p2.resultadoIMC < 18.5)
    {
        printf("Abaixo do peso!\n");
        printf("====================================================\n");
    }
    else if (p2.resultadoIMC > 18.5 && p2.resultadoIMC < 24.9)
    {
        printf("Peso normal\n");
        printf("====================================================\n");
    }
    else if (p2.resultadoIMC > 25 && p2.resultadoIMC < 29.9)
    {
        printf("Sobrepeso\n");
        printf("====================================================\n");
    }
    else if (p2.resultadoIMC >= 30)
    {
        printf("Obesidade\n");
        printf("====================================================\n");
    }

    // pessoa 3

    printf("Digite o nome da terceira pessoa: ");
    scanf("%s", &p3.vetorNome[i]);

    printf("Qual a altura da pessoa(em metros): ");
    scanf("%f", &p3.altura);

    printf("Informe seu peso(em quilos): ");
    scanf("%f", &p3.peso);

    p3.resultadoIMC = p3.peso / (p3.altura * p3.altura);
    resultadoIMC = p3.resultadoIMC;
    printf("O IMC desta pessoa e: %.2f\n", resultadoIMC);

    if (p3.resultadoIMC < 18.5)
    {
        printf("Abaixo do peso!\n");
        printf("===================================================\n");
    }
    else if (p3.resultadoIMC > 18.5 && p3.resultadoIMC < 24.9)
    {
        printf("Peso normal\n");
        printf("===================================================\n");
    }
    else if (p3.resultadoIMC > 25 && p3.resultadoIMC < 29.9)
    {
        printf("Sobrepeso\n");
        printf("===================================================\n");
    }
    else if (p3.resultadoIMC >= 30)
    {
        printf("Obesidade\n");
        printf("===================================================\n");
    }

    // pessoa 4

    printf("Digite o nome da quarta pessoa: ");
    scanf("%s", &p4.vetorNome[i]);

    printf("Qual a altura da pessoa(em metros): ");
    scanf("%f", &p4.altura);

    printf("Informe seu peso(em quilos): ");
    scanf("%f", &p4.peso);

    p4.resultadoIMC = p4.peso / (p4.altura * p4.altura);
    resultadoIMC = p4.resultadoIMC;
    printf("O IMC desta pessoa e: %.2f\n", resultadoIMC);

    if (p4.resultadoIMC < 18.5)
    {
        printf("Abaixo do peso!\n");
        printf("===================================================\n");
    }
    else if (p4.resultadoIMC > 18.5 && p4.resultadoIMC < 24.9)
    {
        printf("Peso normal\n");
        printf("===================================================\n");
    }
    else if (p4.resultadoIMC > 25 && p4.resultadoIMC < 29.9)
    {
        printf("Sobrepeso\n");
        printf("===================================================\n");
    }
    else if (p4.resultadoIMC >= 30)
    {
        printf("Obesidade\n");
        printf("===================================================\n");
    }
    // pessoa 4

    printf("Digite o nome da quinta pessoa: ");
    scanf("%s", &p5.vetorNome[i]);

    printf("Qual a altura da pessoa(em metros): ");
    scanf("%f", &p5.altura);

    printf("Informe seu peso(em quilos): ");
    scanf("%f", &p5.peso);

    p5.resultadoIMC = p5.peso / (p5.altura * p5.altura);
    resultadoIMC = p5.resultadoIMC;
    printf("O IMC desta pessoa e: %.2f\n", resultadoIMC);

    if (p5.resultadoIMC < 18.5)
    {
        printf("Abaixo do peso!\n");
        printf("===================================================\n");
    }
    else if (p5.resultadoIMC > 18.5 && p5.resultadoIMC < 24.9)
    {
        printf("Peso normal\n");
        printf("===================================================\n");
    }
    else if (p5.resultadoIMC > 25 && p5.resultadoIMC < 29.9)
    {
        printf("Sobrepeso\n");
        printf("===================================================\n");
    }
    else if (p5.resultadoIMC >= 30)
    {
        printf("Obesidade\n");
        printf("===================================================\n");
    }
}
/*
Abaixo do peso: IMC < 18,5
Peso normal: 18,5 ≤ IMC < 24,9
Sobrepeso: 25 ≤ IMC < 29,9
Obesidade: IMC ≥ 30
*/