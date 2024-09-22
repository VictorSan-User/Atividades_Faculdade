#ifndef AGENDA_H
#define AGENDA_H

#include "Pessoas.h"

typedef struct Agenda {
    Pessoa dado[5]; // Array de pessoas
    int contador;    // Contador de pessoas cadastradas
} Agenda;

void InicializarAgenda(Agenda *agenda);
void CadastrarNaAgenda(Agenda *agenda);
void ExibirAgenda(const Agenda *agenda);
void ModificarPessoa(Agenda *agenda, int id, const char *novoNome, float novaAltura, int novoDia, int novoMes, int novoAno);

#endif // AGENDA_H
