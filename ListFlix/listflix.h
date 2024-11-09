#ifndef LISTFLIX_H
#define LISTFLIX_H

// Estrutura para um episódio
typedef struct episodios {
    char titulo[50];
    struct episodios *proximo;
    struct episodios *anterior;
} Episodio;

// Estrutura para a lista de episódios de uma série
typedef struct {
    int quantidade;
    Episodio *primeiro;
    Episodio *ultimo;
} ListaEpisodeos;

// Estrutura para uma série
typedef struct Serie {
    char titulo_serie[50];
    int codigo;
    ListaEpisodeos episodios;
    struct Serie *proximo;
} Serie;

// Estrutura para a lista de séries
typedef struct {
    int quantidade;
    Serie *primeiro;
    Serie *ultimo;
} ListaSeries;

// Funções para manipulação de episódios
void InicializarEpisodios(ListaEpisodeos *lista);
void NovoEpisodio(ListaEpisodeos *lista);
void ExibirEpisodios(const ListaEpisodeos *lista);

// Funções para manipulação de séries
void InicializaNovaSerie(ListaSeries *listaSeries);
void CriaNovaSerie(ListaSeries *listaSeries, const char *nomeSerie);
void ExibirSeries(const ListaSeries *listaSeries);

#endif
