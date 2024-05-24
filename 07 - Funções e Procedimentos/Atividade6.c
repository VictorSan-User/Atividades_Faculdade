#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // Lê a palavra digitada pelo usuário

    int tamanho = strlen(palavra); // defino a variavel tamanho do tamanho da variavel palavra

    printf("Palavra na ordem inversa: ");
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]); // Imprime os caracteres da palavra na ordem inversa
    }
    printf("\n");

    return 0;
}
