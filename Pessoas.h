#ifndef PESSOAS_H
#define PESSOAS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa {
    char nome[50];
    int id;
    float altura;
    int diaNacimento;
    int mesNacimento;
    int anoNacimento;
} Pessoa;

void CadastrarPessoa(Pessoa *pessoa);
void ExibirPessoa(const Pessoa *pessoa);

#endif // PESSOAS_H
