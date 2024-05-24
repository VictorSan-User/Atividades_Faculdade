#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[11]; // Alocando espaço para a palavra (10 caracteres + 1 para o caractere nulo '\0')

    printf("Digite uma palavra:");
    scanf("%s", palavra); // Lendo a palavra do usuário (no máximo 10 caracteres)

    printf("A palavra digitada foi: %s\n", palavra); // Imprimindo a palavra na tela

    return 0;
}
