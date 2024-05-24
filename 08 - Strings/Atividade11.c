#include <stdio.h>
#include <ctype.h>

int maluquice()
{
    char texto[10001];  // String para armazenar o texto
    int numEspacos = 0; // Contador de espaços
    int numVogalA = 0;  // Contador de 'a' e 'A'
    int numVogalU = 0;  // Contador de 'u' e 'U'
    int numNumeros = 0; // Contador de números

    // Solicita ao usuário que preencha o texto
    printf("Digite um texto:\n");
    fgets(texto, sizeof(texto), stdin); // Lê o texto do usuário

    // Setor de contagem dos contadores
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ')
        {
            numEspacos++;
        }
        else if (tolower(texto[i]) == 'a')
        {
            numVogalA++;
        }
        else if (tolower(texto[i]) == 'u')
        {
            numVogalU++;
        }
        else if (isdigit(texto[i]))
        {
            numNumeros++;
        }
    }

    // Exibe os resultados
    printf("\n=== Analise do Texto ===\n");
    printf("Quantidade de espacos: %d\n", numEspacos);
    printf("Quantidade de vezes que a vogal 'a' apareceu: %d\n", numVogalA);
    printf("Quantidade de vezes que a vogal 'u' apareceu: %d\n", numVogalU);
    printf("Quantidade de vezes que um numero apareceu: %d\n", numNumeros);

    return 0;
}

int main()
{
    maluquice();

    return 0;
}
