typedef struct Tipo_Video {
    int id;
    char nome[50];
    int duracao;
    struct Tipo_Video *proximo;
} TipoVideo;

typedef struct Lista_Videos {
    int quantidade;
    TipoVideo *primeiro;
    TipoVideo *ultimo;
} ListaVideos;

void CadastrarVideo(ListaVideos *lista);
void ExibirVideos(ListaVideos *lista);
void ExibirDuracaoTotal(ListaVideos *lista);
