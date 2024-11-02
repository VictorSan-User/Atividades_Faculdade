#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Episodio
typedef struct ep {
    int Numero;
    char titulo[50+1];
} tipoEpisodio;

// Episodio com seu anterior e proximo
typedef struct No_Lista {
    tipoEpisodio *episodio;
    struct No_Lista *proximo;
    struct No_Lista *anterior;
} tipoItem;

// Serie em si
typedef struct lista_ep {
    tipoItem *primeiro;
    tipoItem *ultimo;
    int quantidade;
} Serie;

void CadastrarEp(Serie *serie) {
    tipoItem *novoEp = malloc(sizeof(tipoItem));
    if (novoEp != NULL) {
        novoEp->episodio = malloc(sizeof(tipoEpisodio)); // Aloca memória para episodio
        if (novoEp->episodio == NULL) {
            printf("Erro ao alocar memoria para episodio\n");
            free(novoEp);
            return;
        }

        printf("Titulo do episodio %d:\n:", serie->quantidade + 1);
        fgets(novoEp->episodio->titulo, 51, stdin);

        if (serie->quantidade == 0) {
            serie->primeiro = novoEp;
            novoEp->proximo = NULL;
            novoEp->anterior = NULL;
        } else {
            serie->ultimo->proximo = novoEp;
            novoEp->proximo = NULL;
            novoEp->anterior = serie->ultimo;
        }
        serie->ultimo = novoEp;
        serie->quantidade++;
        printf("Episodio cadastrado com Sucesso!\n");
    }
    printf("==================================\n");
}

void RemoveUltimo(Serie *serie) {
    if (serie->primeiro == NULL) {
        printf("Nao ha episodios a serem excluidos\n");
        return;
    }

    tipoItem *atual = serie->primeiro;
    tipoItem *anterior = NULL;

    while (atual->proximo != NULL) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (anterior == NULL) { // Se houver apenas um episódio
        serie->primeiro = NULL;
        serie->ultimo = NULL;
    } else {
        anterior->proximo = NULL;
        serie->ultimo = anterior;
    }

    free(atual->episodio);
    free(atual);
    serie->quantidade--;
    printf("Episodio Excluido com sucesso!\n");
    printf("==============================\n");
}

void ExibirSerie(Serie *serie) {
    if (serie->quantidade == 0) {
        printf("Nao ha episodios ainda\n");
        printf("==========================\n");
        return;
    } else {
        tipoItem *aux = serie->primeiro;
        int i = 1;
        while (aux != NULL) {
            printf("==============================\n");
            printf("Episodio %d\n", i++);
            printf("%s\n", aux->episodio->titulo);
            aux = aux->proximo;
        }
    }
}

int main() {
    int opcao;
    Serie *serie = (Serie*) malloc(sizeof(Serie));
    serie->primeiro = NULL;
    serie->ultimo = NULL;
    serie->quantidade = 0;

    do {
        printf("|===========SELECIONE==============|\n");
        printf("|1 - Cadastrar um episodio.        |\n");
        printf("|2 - Remover ultimo episodio.      |\n");
        printf("|3 - Exibir Serie.                 |\n");
        printf("|4 - Sair.                         |\n|==================================|\n:");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer de entrada
        switch (opcao) {
            case 1:
                CadastrarEp(serie);
                break;
            case 2:
                RemoveUltimo(serie);
                break;
            case 3:
                ExibirSerie(serie);
                break;
            case 4:
                printf("Saindo\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
