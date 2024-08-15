#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nome[20];
    char fabricante[20];
    float preco;
} Celular;

void Cadastro_Celular(Celular* Novo_Celular) {
    printf("ID: ");
    scanf("%d", &Novo_Celular->id);

    printf("Modelo: ");
    scanf("%s", Novo_Celular->nome);

    printf("Fabricante: ");
    scanf("%s", Novo_Celular->fabricante);

    printf("Preco: ");
    scanf("%f", &Novo_Celular->preco);
}

int main() {
    int opcao;
    int n_Cel;
    int celulares_cadastrados = 0;  // Inicializa o contador de celulares cadastrados
    Celular *vet;

    printf("Defina a quantidade de celulares: ");
    scanf("%d", &n_Cel);

    vet = malloc(n_Cel * sizeof(Celular));  // Vetor de estruturas Celular

    if (vet == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    do {
        printf("O que deseja realizar:");
        printf("\n1 - Exibir Celulares Cadastrados\n2 - Cadastrar Novo Celular\n3 - Sair.\n:");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (celulares_cadastrados == 0) {
                printf("Nao ha celulares cadastrados.\n");
            } else {
                for (int i = 0; i < celulares_cadastrados; i++) {
                    printf("\nCelular %d:\n", i + 1);
                    printf("ID: %d\n", vet[i].id);
                    printf("Modelo: %s\n", vet[i].nome);
                    printf("Fabricante: %s\n", vet[i].fabricante);
                    printf("Preco: %.2f\n", vet[i].preco);
                }
            }
        } else if (opcao == 2) {
            if (celulares_cadastrados < n_Cel) {
                Cadastro_Celular(&vet[celulares_cadastrados]);
                celulares_cadastrados++;
            } else {
                printf("Numero maximo de celulares cadastrados.\n");
            }
        }
    } while (opcao != 3);

    if (opcao == 3) {
        printf("Saindo...\n");
    }

    free(vet);  // Libera a memória alocada

    return 0;
}
