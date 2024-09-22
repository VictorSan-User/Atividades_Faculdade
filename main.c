#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Agenda.h"
#include "Pessoas.h"

int main() {
    int opcao = 0;  // Inicializa opcao com 0 para evitar comportamentos indefinidos
    Agenda minhaAgenda;  // Declara a agenda
    InicializarAgenda(&minhaAgenda);  // Inicializa a agenda

    while (opcao != 4) {
        printf("SELECIONE:\n");
        printf("1 - Cadastrar nova pessoa.\n");
        printf("2 - Alterar informacao de uma pessoa.\n");
        printf("3 - Exibir pessoas cadastradas.\n");
        printf("4 - Sair.\n");
        
        // Lê a opção do usuário
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);
        getchar();  // Captura o ENTER deixado no buffer

        switch (opcao) {
            case 1:
                CadastrarNaAgenda(&minhaAgenda);
                break;
            case 2: {
                int id;
                char novoNome[50];
                float novaAltura;
                int novoDia, novoMes, novoAno;
                

                printf("Digite o ID da pessoa a ser alterada: ");
                scanf("%d", &id);
                getchar();  // Captura o ENTER deixado no buffer

                printf("Digite o novo nome: ");
                fgets(novoNome, sizeof(novoNome), stdin);
                novoNome[strcspn(novoNome, "\n")] = '\0';  // Remove o '\n' deixado pelo fgets

                printf("Digite a nova altura: ");
                scanf("%f", &novaAltura);
                getchar();  // Captura o ENTER deixado no buffer

                printf("Dia do nascimento: ");
                scanf("%d", &novoDia);
                getchar();

                printf("Mes do nascimento: ");
                scanf("%d", &novoMes);
                getchar();

                printf("Ano do nascimento: ");
                scanf("%d", &novoAno);
                getchar();

                // Aqui você chamará a função para modificar os dados
                ModificarPessoa(&minhaAgenda, id, novoNome, novaAltura, novoDia, novoMes, novoAno);
                break;
            }
            case 3:
                printf("\nPessoas cadastradas na agenda:\n");
                ExibirAgenda(&minhaAgenda);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    }
    
    return 0;
}
