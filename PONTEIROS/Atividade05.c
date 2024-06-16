#include <stdio.h>

int conta_letra(char *palavra, char letra)
{
    int count = 0;
    while (*palavra != '\0')
    {

        if (*palavra == letra)
        {
            count++;
        }
        palavra++;
    }
    return count;
}

int main()
{
    char palavra[100];
    char letra;
    int ocorrencias;

    printf("DIGITE UMA PALAVRA: ");
    fgets(palavra, sizeof(palavra), stdin);

    
    palavra[strcspn(palavra, "\n")] = '\0';

    printf("DIGITE UMA LETRA: ");
    scanf("%c", &letra);

    ocorrencias = conta_letra(palavra, letra);

    printf("A LETRA '%c' OCORRE %d VEZES NA PALAVRA \"%s\".\n", letra, ocorrencias, palavra);

    return 0;
}
