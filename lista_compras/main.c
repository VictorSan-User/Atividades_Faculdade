#include <stdio.h>
#include <stdlib.h>
#include "produtos.h"

int main() {
    Lista *NovaLista;

    NovaLista = malloc(sizeof(Lista));

    NovaLista->quantidade = 0; // Inicializa a quantidade
    NovaLista->total = 0.0; // Inicializa o total
    NovaLista->primeiro = NULL; // Inicializa o ponteiro para o primeiro item
    int opcao;

    do {
        printf("============================================\n");
        printf("O que deseja fazer na lista:\n");
        printf("1 - Adicionar produtos a comprar.\n");
        printf("2 - Adicionar produtos ao fim da lista.\n");
        printf("3 - Adicionar produtos no inicio da lista.\n");
        printf("4 - Exibir itens salvos.\n");
        printf("5 - Calcular o valor total da lista.\n");
        printf("6 - Sair.\n:");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                AdicionarProduto(NovaLista); // Passa a lista em vez de um item
                break;
            case 2: 
                InsereNofIM(NovaLista);
                break;
            case 3:
                InsereNoiNICIO(NovaLista);
                break;
            case 4:
                ExibirItens(NovaLista);
                break;
            case 5:
                ValorTotalLista(NovaLista);
                break;
            case 6:
                printf("Saindo\n");
                system("pause");
            default:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}