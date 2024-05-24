#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[20];
    char palavra2[20];
    char aux[20]; // String temporária para troca

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    // Compara as duas palavras usando a função strcmp da biblioteca string.h
    if (strcmp(palavra1, palavra2) > 0)
    {
        // Se a primeira palavra é lexicograficamente maior que a segunda, troca as palavras
        strcpy(aux, palavra1);
        strcpy(palavra1, palavra2);
        strcpy(palavra2, aux);
    }

    printf("As palavras em ordem alfabetica sao:\n");
    printf("%s\n%s\n", palavra1, palavra2);

    return 0;
}
