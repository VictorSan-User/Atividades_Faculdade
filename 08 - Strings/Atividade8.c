#include <stdio.h>
#include <string.h>

int main()
{
    char primeiroNome[50];  // String para armazenar o primeiro nome
    char segundoNome[50];   // String para armazenar o segundo nome
    char nomeCompleto[100]; // String para armazenar o nome completo

    printf("Digite o primeiro nome: ");
    scanf("%s", primeiroNome); // Lê o primeiro nome (limitado a 49 caracteres para deixar espaço para o caractere nulo)

    printf("Digite o segundo nome: ");
    scanf("%s", segundoNome); // Lê o segundo nome (limitado a 49 caracteres para deixar espaço para o caractere nulo)

    // Concatena o primeiro nome, um espaço em branco e o segundo nome
    strcpy(nomeCompleto, primeiroNome); // Copia o primeiro nome para nomeCompleto
    strcat(nomeCompleto, " ");          // Adiciona um espaço em branco
    strcat(nomeCompleto, segundoNome);  // Adiciona o segundo nome

    printf("O nome completo e: %s\n", nomeCompleto); // Imprime o nome completo

    return 0;
}
