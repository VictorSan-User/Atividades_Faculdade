#include <stdio.h>

int main()
{
    char nomes[5][21]; // 5 linhas de até 20 caracteres + 1 para o caractere nulo '\0'
    int i;

    // Preenchendo a matriz com os nomes das pessoas
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa %d (maximo de 20 caracteres): ", i + 1);
        scanf("%20s", nomes[i]);
    }

    // Limpando o buffer do teclado
    while (getchar() != '\n')
        ;

    // Exibindo os nomes
    printf("\nNomes das pessoas:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d: %s\n", i + 1, nomes[i]);
    }

    return 0;
}
