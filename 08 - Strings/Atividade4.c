#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500]; // Alocando espaço para a frase (até 1000 caracteres)

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Lendo a frase do usuário

    printf("A frase possui %d caracteres.\n", (int)strlen(frase)); // Imprimindo a quantidade de letras da frase

    return 0;
}
