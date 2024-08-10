#include <stdio.h>
#include <string.h>

#define MAX_VIDEOS 5

typedef struct {
    int id;
    char titulo[50];
    int duracao;
} Video;


void Cadastrar_Video(Video* video) {
    printf("ID do video: ");
    scanf("%d", &video->id);
   
    printf("Titulo do video: ");
    scanf(" %[^\n]", video->titulo); // Lê uma string com espaços
   
    printf("Duracao do video (em minutos): ");
    scanf("%d", &video->duracao);
}


void Exibir_Video(const Video* video) {
    printf("\nID: %d\n", video->id);
    printf("Titulo: %s\n", video->titulo);
    printf("Duracao: %d minutos\n", video->duracao);
}


int main() {
    Video videos[MAX_VIDEOS] = {0};
    int opcao;
    int contador = 0; // Para controlar quantos vídeos foram cadastrados
   
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Cadastrar Video\n");
        printf("2 - Exibir Videos\n");
        printf("0 - Sair\n");
        printf(": ");
        scanf("%d", &opcao);
       
        switch (opcao) {
            case 1:
                if (contador < MAX_VIDEOS) {
                    Cadastrar_Video(&videos[contador]);
                    contador++;
                } else {
                    printf("Nao e possivel cadastrar mais videos. O vetor esta cheio.\n");
                }
                break;
            case 2:
                if (contador == 0) {
                    printf("Nenhum video cadastrado.\n");
                } else {
                    for (int i = 0; i < contador; i++) {
                        Exibir_Video(&videos[i]);
                    }
                }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
   
    return 0;
}