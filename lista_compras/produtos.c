#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

void AdicionarProduto(Lista *lista) {
    Itens *novo_item = malloc(sizeof(Itens));
    if (novo_item != NULL) {
        printf("Qual o ID do novo item: ");
        scanf("%d", &novo_item->id);

        printf("Qual o nome do item: ");
        getchar(); // Limpa o buffer
        fgets(novo_item->Nome, 50, stdin);

        printf("Qual o valor do item: ");
        scanf("%f", &novo_item->Valor);

        // Adiciona o novo item à lista
        novo_item->proximo = lista->primeiro; 
        lista->primeiro = novo_item;

        printf("=> Produto Adicionado com sucesso!\n==================================\n");
        
    } else {
        printf("Qual o ID do novo item: ");
        scanf("%d", &novo_item->id);

        printf("Qual o nome do item: ");
        getchar(); // Limpa o buffer
        fgets(novo_item->Nome, 50, stdin);

        printf("Qual o valor do item: ");
        scanf("%f", &novo_item->Valor);

        novo_item->proximo = lista->ultimo; 
    }
        lista->ultimo = novo_item;
        lista->quantidade++;
}


void InsereNoiNICIO(Lista *lista) {
    Itens *novo_item = malloc(sizeof(Itens));
    if (novo_item != NULL) {
        printf("Qual o ID do novo item: ");
        scanf("%d", &novo_item->id);

        printf("Qual o nome do item: ");
        getchar(); // Limpa o buffer
        fgets(novo_item->Nome, 50, stdin);

        printf("Qual o valor do item: ");
        scanf("%f", &novo_item->Valor);

        // Adiciona o novo item à lista
        novo_item->proximo = lista->primeiro; // Insere no início da lista
        lista->primeiro = novo_item;
        lista->quantidade++;

        printf("=> Produto Adicionado com sucesso!\n==================================\n");
    } else {
        printf("Erro ao alocar memoria para o novo produto.\n");
    }
}
void InsereNofIM(Lista *lista){
    Itens *novo_item = malloc(sizeof(Itens));
    if (novo_item != NULL) {
        printf("Qual o ID do novo item: ");
        scanf("%d", &novo_item->id);

        printf("Qual o nome do item: ");
        getchar(); // Limpa o buffer
        fgets(novo_item->Nome, 50, stdin);

        printf("Qual o valor do item: ");
        scanf("%f", &novo_item->Valor);

        // Adiciona o novo item à lista
        novo_item->proximo = lista->ultimo; // Insere no início da lista
        lista->ultimo = novo_item;
        lista->quantidade++;

        printf("=> Produto Adicionado com sucesso!\n==================================\n");
    } else {
        printf("Erro ao alocar memoria para o novo produto.\n");
    }
}

float ValorTotalLista(Lista *total) {
    if (total->quantidade == 0) {
        printf("Nao ha itens a somar.\n");
        return 0.0;
    }

    total->total = 0.0; // Inicializa a conta total com zero
    Itens *aux = total->primeiro; // Começa do primeiro item

    while (aux != NULL) {
        total->total += aux->Valor; // Soma o valor do item
        aux = aux->proximo; // Move para o próximo item
    }

    printf("O valor total e: %.2f\n", total->total); // Imprime o total
    return total->total; // Retorna o valor total
}

void ExibirItens(Lista *lista) {
    if (lista->quantidade == 0) {
        printf("Nao ha itens cadastrados\n");
    } else {
        Itens *aux = lista->primeiro; // Começa do primeiro item
        while (aux != NULL) {
            printf("=====================================\n");
            printf("ID: %d\n", aux->id);
            printf("Nome: %s\n", aux->Nome);
            printf("Valor: %.2f\n", aux->Valor);
            aux = aux->proximo; // Move para o próximo item
        }
    }
}