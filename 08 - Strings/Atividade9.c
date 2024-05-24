#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[20];
    char palavra2[20];

    printf("DIGITE A PRIMEIRA PALAVRA: ");
    scanf("%s", palavra1);

    printf("\nDIGITE A SEGUNDA PALAVRA: ");
    scanf("%s", palavra2);

    // Compara as duas palavras usando a função strcmp da biblioteca string.h
    if (strcmp(palavra1, palavra2) == 0)
    {
        printf("\nAS DUAS PALAVRAS SAO IGUAIS.\n");
    }
    else
    {
        printf("\nAS DUAS PALAVRAS SAO DIFERENTES.\n");
    }

    return 0;
}
