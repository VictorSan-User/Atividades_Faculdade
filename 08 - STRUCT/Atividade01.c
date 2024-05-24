#include <stdio.h>
#include <string.h>

// Definindo as estruturas
struct Corpo
{
    char nome[20];
    float altura;
    float peso;
};

struct Casal
{
    struct Corpo pessoa1;
    struct Corpo pessoa2;
};

int main()
{

    struct Casal casais[6];

    // preenchendo com aleatorios para evitar fadiga
    for (int i = 0; i < 6; i++)
    {

        snprintf(casais[i].pessoa1.nome, 20, "Pessoa1_%d", i + 1);
        casais[i].pessoa1.altura = 1.70 + i * 0.01;
        casais[i].pessoa1.peso = 70 + i * 2;

        snprintf(casais[i].pessoa2.nome, 20, "Pessoa2_%d", i + 1);
        casais[i].pessoa2.altura = 1.60 + i * 0.01;
        casais[i].pessoa2.peso = 60 + i * 2;
    }

    // Exibindo os belíssimos dados
    for (int i = 0; i < 6; i++)
    {
        printf("Casal %d:\n", i + 1);
        printf("  Pessoa 1 - Nome: %s, Altura: %.2f, Peso: %.2f\n",
               casais[i].pessoa1.nome, casais[i].pessoa1.altura, casais[i].pessoa1.peso);
        printf("  Pessoa 2 - Nome: %s, Altura: %.2f, Peso: %.2f\n",
               casais[i].pessoa2.nome, casais[i].pessoa2.altura, casais[i].pessoa2.peso);
    }

    return 0;
}
