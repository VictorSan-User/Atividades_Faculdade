#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50], sobrenome[50];

    printf("Digite nomes e sobrenomes (Enter para encerrar):\n");

    while (1)
    {
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin); // Lê o nome digitado pelo usuário

        // Remove a quebra de linha do final do nome
        nome[strcspn(nome, "\n")] = '\0';

        // Verifica se o nome é vazio
        if (strcmp(nome, "") == 0)
        {
            printf("Encerrando o programa...\n");
            break; // Sai do loop while
        }

        printf("Sobrenome: ");
        fgets(sobrenome, sizeof(sobrenome), stdin); // Lê o sobrenome digitado pelo usuário

        // Remove a quebra de linha do final do sobrenome
        sobrenome[strcspn(sobrenome, "\n")] = '\0';

        printf("Nome formatado: %s, %s\n", sobrenome, nome);
    }

    return 0;
}
