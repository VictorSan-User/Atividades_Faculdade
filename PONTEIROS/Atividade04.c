#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODNAME 60
#define MAX_ITENS 100

typedef struct
{
    char nomeProduto[MAX_PRODNAME];
    int codigo;
    float preco;
} Produto;

void atualizarPrecoProduto(Produto *item, int num_produtos, int codigo)
{
    for (int i = 0; i < num_produtos; i++)
    {
        if (item[i].codigo == codigo)
        {
            printf("DIGITE O NOVO PRECO DO PRODUTO '%s': ", item[i].nomeProduto);
            scanf("%f", &item[i].preco);
            getchar();
            printf("Preço atualizado com sucesso!\n");
            return;
        }
    }
    printf("PRODUTO COM CODIGO %d NAO ENCONTRADO.\n", codigo);
}

int main()
{
    Produto *item = NULL;
    int opcao;
    int num_produtos = 0;

    while (1)
    {
        printf("========================= L O J A ===========================\n");
        printf("1- CADASTRAR PRODUTOS NOVOS.\n");
        printf("2- VISUALIZAR OS PRODUTOS JA CADASTRADOS.\n");
        printf("3- ATUALIZAR O PRECO DOS PRODUTOS.\n");
        printf("4- SAIR.\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
        {
            free(item);

            item = (Produto *)malloc(MAX_ITENS * sizeof(Produto));
            if (item == NULL)
            {
                printf("Erro de alocacao de memoria\n");
                return 1;
            }

            num_produtos = 0;

            do
            {
                printf("DIGITE O NOME DO PRODUTO %d: ", num_produtos + 1);
                fgets(item[num_produtos].nomeProduto, MAX_PRODNAME, stdin);
                item[num_produtos].nomeProduto[strcspn(item[num_produtos].nomeProduto, "\n")] = '\0';

                printf("DIGITE O CODIGO DO PRODUTO %d: ", num_produtos + 1);
                scanf("%d", &item[num_produtos].codigo);
                getchar();

                printf("DIGITE O PRECO DO PRODUTO %d: ", num_produtos + 1);
                scanf("%f", &item[num_produtos].preco);
                getchar();
                printf("DESEJA ADCIONAR MAIS UM ITEM? (s/n): ");
                char resposta;
                scanf(" %c", &resposta);
                getchar();

                num_produtos++;

                if (resposta != 's' && resposta != 'S')
                {
                    break;
                }
            } while (num_produtos < MAX_ITENS);

            break;
        }
        case 2:
            if (item == NULL || num_produtos == 0)
            {
                printf("NENHUM PRODUTO CADASTRADO.\n");
            }
            else
            {
                for (int i = 0; i < num_produtos; i++)
                {
                    printf("\nPRODUTO %d:\n", i + 1);
                    printf("NOME: %s\n", item[i].nomeProduto);
                    printf("CODIGO: %d\n", item[i].codigo);
                    printf("PRECO: %.2f\n", item[i].preco);
                }
            }
            break;

        case 3:
            if (item == NULL || num_produtos == 0)
            {
                printf("NENHUM PRODUTO CADASTRADO.\n");
            }
            else
            {
                int codigo;
                printf("DIGITE O CODIGO DO ITEM A SER ATUALIZADO: ");
                scanf("%d", &codigo);
                getchar();
                atualizarPrecoProduto(item, num_produtos, codigo);
            }
            break;

        case 4:
            printf("SAINDO...\n");

            free(item);
            return 0;

        default:
            printf("OPCAO INVALIDA, TENTE NOVAMENTE.\n");
            break;
        }
    }

    return 0;
}
