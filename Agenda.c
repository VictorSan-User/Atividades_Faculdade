#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoas.h"
#include "Agenda.h"

void InicializarAgenda(Agenda *agenda) {
    agenda->contador = 0;
}

void CadastrarNaAgenda(Agenda *agenda) {
    if (agenda->contador < 5) {
        CadastrarPessoa(&agenda->dado[agenda->contador]);
        agenda->contador++;
    } else {
        printf("Agenda cheia! Nao e possível cadastrar mais pessoas.\n");
    }
}

void ExibirAgenda(const Agenda *agenda) {
    for (int i = 0; i < agenda->contador; i++) {
        ExibirPessoa(&agenda->dado[i]);
    }
}
void ModificarPessoa(Agenda *agenda, int id, const char *novoNome, float novaAltura, int novoDia, int novoMes, int novoAno) {
    for (int i = 0; i < agenda->contador; i++) {
        if (agenda->dado[i].id == id) {
            // Encontrou a pessoa, altera os dados
            strncpy(agenda->dado[i].nome, novoNome, sizeof(agenda->dado[i].nome) - 1);
            agenda->dado[i].nome[sizeof(agenda->dado[i].nome) - 1] = '\0'; // Garante que o nome esteja terminado em '\0'
            agenda->dado[i].altura = novaAltura;
            agenda->dado[i].diaNacimento = novoDia;
            agenda->dado[i].mesNacimento = novoMes;
            agenda->dado[i].anoNacimento = novoAno;

            printf("--------------------------------------------------\n");
            printf("\nDados da pessoa com ID %d alterados com sucesso!\n", id);
            printf("--------------------------------------------------\n");
            return;
        }
    }

    // Se chegou aqui, o id não foi encontrado
    printf("Pessoa com ID %d nao encontrada.\n", id);
}

