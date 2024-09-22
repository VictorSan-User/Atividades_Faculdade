#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "videos.h"

#define MAX_VIDEO 5

void CadastrarVideo(ListaVideos *lista) {
    if (lista->quantidade >= MAX_VIDEO) {
        printf("Limite de videos atingido. Nao e possivel cadastrar mais videos.\n");
        return;
    }

    TipoVideo *novoVideo = malloc(sizeof(TipoVideo));

    if (novoVideo == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return;
    }

    printf("Qual o titulo do video:\n");
    fgets(novoVideo->nome, 50, stdin);
    novoVideo->nome[strcspn(novoVideo->nome, "\n")] = '\0';  // Remover o '\n'
    printf("Qual a duracao do video (em minutos):\n");
    scanf("%d", &novoVideo->duracao);
    printf("ID do video:\n");
    scanf("%d", &novoVideo->id);
    getchar();  // Limpar buffer de entrada
    novoVideo->proximo = NULL;

    if (lista->quantidade == 0) {
        lista->primeiro = novoVideo;
        lista->ultimo = novoVideo;
    } else {
        lista->ultimo->proximo = novoVideo;
        lista->ultimo = novoVideo;
    }

    lista->quantidade++;
}

void ExibirVideos(ListaVideos *lista) {
    if (lista->quantidade == 0) {
        printf("Nenhum video cadastrado.\n");
        return;
    }

    TipoVideo *atual = lista->primeiro;
    printf("====== Lista de Videos =======\n");
    while (atual != NULL) {
        printf("===============================\n");
        printf("Nome: %s\n", atual->nome);
        printf("Id: %d\n", atual->id);
        printf("Duracao: %d\n", atual->duracao);
        printf("===============================\n");
        atual = atual->proximo;
    }
}

void ExibirDuracaoTotal(ListaVideos *lista) {
    int duracaoTotal = 0;
    TipoVideo *atual = lista->primeiro;

    if (lista->quantidade == 0) {
        printf("Nenhum video cadastrado.\n");
        return;
    }

    while (atual != NULL) {
        duracaoTotal += atual->duracao;
        atual = atual->proximo;
    }

    printf("Duracao total dos videos: %d minutos\n", duracaoTotal);
}
