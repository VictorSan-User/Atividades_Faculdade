#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listflix.h"

int main() {
    ListaSeries listaSeries;
    InicializarSeries(&listaSeries);

    int opcaoMenu1, opcaoMenu2;
    char nomeSerie[50];
    Serie *serieSelecionada = NULL;

    do {
        printf("\n--- LISTFLIX ---\n");
        printf("1 - Criar nova serie\n");
        printf("2 - Selecionar serie existente\n");
        printf("3 - Exibir todas as series\n");
        printf("4 - Sair\n");
        scanf("%d", &opcaoMenu1);

        switch (opcaoMenu1) {
            case 1:
                // Criar nova serie
                printf("Digite o nome da nova serie: ");
                getchar();  
                fgets(nomeSerie, 50, stdin);

                CriaNovaSerie(&listaSeries, nomeSerie);
                printf("Serie '%s' criada com sucesso!\n", nomeSerie);
                break;

            case 2:
                // Selecionar serie se existente
                printf("Digite o nome da serie que deseja selecionar: ");
                getchar();
                fgets(nomeSerie, 50, stdin);

                // Procurar pela serie
                serieSelecionada = listaSeries.primeiro;
                while (serieSelecionada != NULL) {
                    if (strcmp(serieSelecionada->titulo_serie, nomeSerie) == 0) {
                        printf("Serie '%s' selecionada.\n", nomeSerie);
                        break;
                    }
                    serieSelecionada = serieSelecionada->proximo;
                }

                if (serieSelecionada == NULL) {
                    printf("Serie não encontrada.\n");
                } else {
                    // Menu para manipulação de episódios
                    do {
                        printf("\n--- EPISODIOS ---\n");
                        printf("1 - Cadastrar novo episodio\n");
                        printf("2 - Exibir episodios cadastrados\n");
                        printf("3 - Voltar ao menu principal\n");
                        scanf("%d", &opcaoMenu2);

                        switch (opcaoMenu2) {
                            case 1:
                                // Cadastrar novo episodio
                                NovoEpisodio(&serieSelecionada->episodios);
                                printf("Episodio cadastrado com sucesso!\n");
                                break;

                            case 2:
                                // Exibir episódios
                                printf("Episodios da serie '%s':\n", serieSelecionada->titulo_serie);
                                ExibirEpisodios(&serieSelecionada->episodios);
                                break;

                            case 3:
                                printf("Voltando ao menu principal...\n");
                                break;

                            default:
                                printf("Opcao invalida. Tente novamente.\n");
                        }
                    } while (opcaoMenu2 != 3);
                }
                break;

            case 3:
                // Exibir todas as séries
                printf("Series cadastradas:\n");
                ExibirSeries(&listaSeries);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcaoMenu1 != 4);

    // Liberar memoria alocada antes de sair
    LiberarSeries(&listaSeries);

    return 0;
}
