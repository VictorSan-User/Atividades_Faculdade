#include <stdio.h>
#include <string.h>

void encontrarOcorrencias(char cadeia[], char subcadeia[], int ocorrencias[])
{
    int tamCadeia = strlen(cadeia);
    int tamSubcadeia = strlen(subcadeia);
    int count = 0;

    for (int i = 0; i <= tamCadeia - tamSubcadeia; i++)
    {
        int j;
        for (j = 0; j < tamSubcadeia; j++)
        {
            if (cadeia[i + j] != subcadeia[j])
            {
                break;
            }
        }
        if (j == tamSubcadeia)
        {                                 // A subcadeia foi encontrada
            ocorrencias[count++] = i + 1; // Adiciona a posição à lista de ocorrências
        }
    }

    ocorrencias[count] = -1; // Marca o final da lista de ocorrências
}

int main()
{
    char cadeia[] = "TCATATGCAAATAGCTGCATACCGA";
    char subcadeia[] = "CATA";
    int ocorrencias[100]; // Suponha um limite máximo de ocorrências

    encontrarOcorrencias(cadeia, subcadeia, ocorrencias);

    printf("Ocorrencias da subcadeia na cadeia principal:\n");
    for (int i = 0; ocorrencias[i] != -1; i++)
    {
        printf("Posicao: %d\n", ocorrencias[i]);
    }

    return 0;
}
