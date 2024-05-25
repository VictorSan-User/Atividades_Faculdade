#include <stdio.h>
#include <string.h>

// Definindo a estrutura Carro
struct Carro
{
    char modelo[50];
    char placa[10];
    char cor[20];
    int ano;
};

// Definindo a estrutura Avioes
struct Avioes
{
    int seguranca;
    int velocidade;
    int conforto;
    int tecnologia;
};

// Definindo a estrutura Repteis
struct Repteis
{
    int sangueFrio;
    int ovos;
    int semi_aquaticos;
    int dinossauros;
};

// Definindo a estrutura Eletrodomesticos
struct Eletrodomesticos
{
    int praticidade;
    float consumo_h;
    int conforto;
    int seguranca;
};

int main()
{

    struct Carro carro1 = {"Mercedes Benz", "QMQ4446", "Branco", 2012};

    struct Avioes aviao = {1, 1, 1, 1};

    struct Repteis Reptil = {1, 1, 1, 1};

    struct Eletrodomesticos Eletro = {1, 1, 1, 1};

    printf("1 - INFORMACOES SOBRE CARRO:\n");
    printf("a) MODELO: %s\nb) PLACA: %s\nc) COR: %s\nd) ANO: %d\n", carro1.modelo, carro1.placa, carro1.cor, carro1.ano);

    printf("\n2 - INFORMACOES SOBRE AVIAO:\n");
    if (aviao.conforto == 1 && aviao.seguranca == 1 && aviao.tecnologia == 1 && aviao.velocidade == 1)
    {
        printf("a) CONFORTO\nb) SEGURANCA\nc) TECNOLOGIA\nd) VELOCIDADE\n");
    }

    printf("\n3 - INFORMACOES SOBRE REPTEIS\n");
    if (Reptil.sangueFrio == 1 && Reptil.ovos == 1 && Reptil.semi_aquaticos == 1 && Reptil.dinossauros == 1)
    {
        printf("a) SANGUE FRIO\nb) POEM OVOS\nc) SAO SEMI AQUATICOS\nd) PARENTES DOS DINOSSAUROS\n");
    }

    printf("\n4 - INFORMACOES SOBRE ELETRODOMESTICOS\n");
    if (Eletro.conforto == 1 && Eletro.consumo_h == 1 && Eletro.praticidade == 1 && Eletro.seguranca == 1)
    {
        printf("a)  CONFORTO\nb) CONSUMO BAIXO\nc) PRATICIDADE\nd) SEGURANCA DOMESTICA\n");
    }

    return 0;
}