#include <stdio.h>
#include <stdlib.h>
#include "videos.h"

int main() {
    int opcao;
    ListaVideos *lista = (ListaVideos *)malloc(sizeof(ListaVideos));
    
    if (lista == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    lista->quantidade =  0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;

    do {
        printf("+=============SELECIONE============+\n");
        printf("|1. Cadastrar um novo video.        |\n");
        printf("|2. Exibir todos os videos.         |\n");
        printf("|3. Exibir duracao total dos videos.|\n");
        printf("|4. Encerrar programa.              |\n");
        printf("+===================================+\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                CadastrarVideo(lista);
                break;
            case 2:
                ExibirVideos(lista);
                break;
            case 3:
                ExibirDuracaoTotal(lista);
                break;
            case 4:
                printf("Encerrando...\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
