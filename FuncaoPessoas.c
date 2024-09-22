#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoas.h"

void CadastrarPessoa(Pessoa *pessoa) {
    printf("ID da pessoa: ");
    scanf("%d", &pessoa->id);
    getchar(); 

    printf("Nome da pessoa: ");
    fgets(pessoa->nome, sizeof(pessoa->nome), stdin);
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0'; 

    printf("Dia do nascimento: ");
    scanf("%d", &pessoa->diaNacimento);
    getchar();

    printf("Mes do nascimento: ");
    scanf("%d", &pessoa->mesNacimento);
    getchar();

    printf("Ano do nascimento: ");
    scanf("%d", &pessoa->anoNacimento);
    getchar();

    printf("Altura da pessoa: ");
    scanf("%f", &pessoa->altura);
}

void ExibirPessoa(const Pessoa *pessoa) {
    printf("ID: %d\n", pessoa->id);
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: %.2d/%.2d/%.4d\n", pessoa->diaNacimento, pessoa->mesNacimento, pessoa->anoNacimento);
    printf("Altura: %.2f\n", pessoa->altura);
    printf("--------------------\n");
}