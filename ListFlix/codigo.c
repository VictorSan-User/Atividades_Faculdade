#include <stdio.h>
#include <stdlib.h>
#include "listflix.h"

// Funções de manipulação de episódios
void InicializarEpisodios(ListaEpisodeos *lista) {
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->quantidade = 0;
}

void NovoEpisodio(ListaEpisodeos *lista) {
    Episodio *novo = malloc(sizeof(Episodio));
    if (!novo) {
        printf("Erro ao alocar memoria para o episodio.\n");
        return;
    }

    printf("Titulo: ");
    getchar(); 
    fgets(novo->titulo, 50, stdin);

    novo->proximo = NULL;
    novo->anterior = lista->ultimo;

    if (lista->quantidade == 0) {
        lista->primeiro = novo;
    } else {
        lista->ultimo->proximo = novo;
    }

    lista->ultimo = novo;
    lista->quantidade++;
}

void ExibirEpisodios(const ListaEpisodeos *lista) {
    if (lista->quantidade == 0) {
        printf("Nenhum episodio cadastrado.\n");
        return;
    }

    Episodio *atual = lista->primeiro;
    int i = 1;
    while (atual != NULL) {
        printf("Episodio %d: %s", i++, atual->titulo);
        atual = atual->proximo;
    }
}

// Função para liberar memória de episódios
void LiberarEpisodios(ListaEpisodeos *lista) {
    Episodio *atual = lista->primeiro;
    while (atual != NULL) {
        Episodio *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    lista->quantidade = 0;
    lista->primeiro = NULL;
    lista->ultimo = NULL;
}

// Funções de manipulação de séries
void InicializarSeries(ListaSeries *listaSeries) {
    listaSeries->primeiro = NULL;
    listaSeries->ultimo = NULL;
    listaSeries->quantidade = 0;
}

void CriaNovaSerie(ListaSeries *listaSeries, const char *nomeSerie) {
    Serie *nova = malloc(sizeof(Serie));
    if (!nova) {
        printf("Erro ao alocar memoria para a serie.\n");
        return;
    }

    // Inicializa a nova série
    strncpy(nova->titulo_serie, nomeSerie, 50);
    nova->codigo = listaSeries->quantidade + 1;  // Exemplo de código único
    InicializarEpisodios(&nova->episodios);  // Inicializa a lista de episódios da série

    nova->proximo = NULL;

    // Adiciona ao final da lista de séries
    if (listaSeries->quantidade == 0) {
        listaSeries->primeiro = nova;
    } else {
        listaSeries->ultimo->proximo = nova;
    }

    listaSeries->ultimo = nova;
    listaSeries->quantidade++;
}

void ExibirSeries(const ListaSeries *listaSeries) {
    if (listaSeries->quantidade == 0) {
        printf("Nenhuma serie cadastrada.\n");
        return;
    }

    Serie *atual = listaSeries->primeiro;
    while (atual != NULL) {
        printf("Serie: %s\n", atual->titulo_serie);
        ExibirEpisodios(&atual->episodios);
        atual = atual->proximo;
    }
}

// Função para liberar memória das séries
void LiberarSeries(ListaSeries *listaSeries) {
    Serie *atual = listaSeries->primeiro;
    while (atual != NULL) {
        Serie *temp = atual;
        LiberarEpisodios(&temp->episodios);
        atual = atual->proximo;
        free(temp);
    }
    listaSeries->quantidade = 0;
    listaSeries->primeiro = NULL;
    listaSeries->ultimo = NULL;
}
