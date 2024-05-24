#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];

    printf("Digite nomes de pessoas (digite SAIR para encerrar):\n");

    while (1)
    {
        printf("Nome: ");
        scanf(" %s", nome); // Lê o nome digitado pelo usuário

        // Verifica se o usuário digitou "SAIR" (comparação case-insensitive)
        if (strcasecmp(nome, "SAIR") == 0)
        {
            printf("Encerrando o programa...\n");
            break; // Sai do loop while
        }

        printf("Nome digitado: %s\n", nome);
    }

    return 0;
}
