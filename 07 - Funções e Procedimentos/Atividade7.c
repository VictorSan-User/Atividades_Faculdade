#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
    // Define o locale para Português do Brasil
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome1[50], nome2[50];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1); // Lê o primeiro nome digitado pelo usuário

    printf("Digite o segundo nome: ");
    scanf("%s", nome2); // Lê o segundo nome digitado pelo usuário

    // Compara os dois nomes usando a função strcmp
    if (strcmp(nome1, nome2) == 0)
    {
        printf("Os nomes sao iguais.\n");
    }
    else
    {
        printf("Os nomes sao diferentes.\n");
    }

    return 0;
}
