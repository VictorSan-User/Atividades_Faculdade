//usuario escolhe a quantidade de celular 
//a adicionar.

//preencher a estrutura celular.

//exibir celular cadastrado informado 
//pelo usuario.

//exibir todos os celulares cadastrados.

#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[20];
    char fabricante[20];
    float preco;
} Celular;

void Cadastro_Celular(Celular* Novo_Celular) {
    printf("ID: ");
    scanf("%d", &Novo_Celular->id);
    getchar();

    printf("Modelo: ");
    scanf("%19s", Novo_Celular->nome);
    getchar();

    printf("Fabricante: ");
    scanf("%19s", Novo_Celular->fabricante);
    getchar();

    printf("Preco: ");
    scanf("%f", &Novo_Celular->preco);
    getchar();
}

int main() {
    int opcao;
    int n_Cel;
    int celulares_cadastrados = 0;

    printf("Defina a quantidade de celulares: ");
    scanf("%d", &n_Cel);

    Celular vet[n_Cel];  // Vetor de estruturas Celular

    do {
        printf("O que deseja realizar:");
        printf("\n1 - Exibir Celulares Cadastrados\n2 - Cadastrar Novo Celular\n3 - Sair.\n:");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (celulares_cadastrados == 0) {
                printf("Nao ha celulares cadastrados, deseja cadastrar ou nao (1.Sim / 2.Nao)\n:");
                scanf("%d", &opcao);
                if (opcao == 1) {
                    if (celulares_cadastrados < n_Cel) {
                        Cadastro_Celular(&vet[celulares_cadastrados]);
                        celulares_cadastrados++;
                    } else {
                        printf("Numero maximo de celulares cadastrados.\n");
                    }
                }
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
        printf("Saindo...");
    }

    return 0;
}


//Dificuldade em passar ponteiro, do main para o procedimento