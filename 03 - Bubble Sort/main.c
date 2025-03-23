#include <stdio.h>
#include <stdlib.h>

int validarNota(float nota) {
    return (nota >= 0 && nota <= 100);
}

void ordenarNotas(float *notas, int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (notas[j] < notas[j + 1]) {
                // Troca as notas
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    float *notas;
    FILE *arquivo;
    int opcao, escolha;
    do{

        printf("Digite o numero de alunos: ");
        scanf("%d", &n);
    
        // Aloca memoria para o vetor de notas
        notas = (float *)malloc(n * sizeof(float));
        if (notas == NULL) {
            printf("Erro ao alocar memoria!\n");
            exit(1);
        }
    
        // Pergunta se o usuario deseja ler as notas de um arquivo
        printf("Deseja ler as notas de um arquivo? (1 - sim/2 - nao): ");
        scanf("%d", &opcao);
    
        if (opcao == 2) {
            // Abre o arquivo para leitura
            arquivo = fopen("notas.txt", "r");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo!\n");
                free(notas);
                return 1;
            }
    
            // Le as notas do arquivo
            for (i = 0; i < n; i++) {
                if (fscanf(arquivo, "%.2f", &notas[i]) != 1 || !validarNota(notas[i])) {
                    printf("Erro: Nota invalida no arquivo!\n");
                    fclose(arquivo);
                    free(notas);
                    return 1;
                }
            }
    
            fclose(arquivo);
        } else {
            
            for (i = 0; i < n; i++) {
                printf("Digite a nota do aluno %d: ", i + 1);
                scanf("%f", &notas[i]);
    
                while (!validarNota(notas[i])) {
                    printf("Nota invalida! Digite uma nota entre 0 e 100: ");
                    scanf("%f", &notas[i]);
                }
            }
        }
    
        // Ordena as notas
        ordenarNotas(notas, n);
    
        // Exibe as notas ordenadas
        printf("\nNotas ordenadas:\n");
        for (i = 0; i < n; i++) {
            printf("Nota %.2f esta em %do lugar\n", notas[i], i + 1);
        }

        free(notas);

        printf("\nDeseja atribuir mais notas a outra turma de alunos? (1 - sim/ 2 - nao): ");
        scanf("%d", &escolha);
    }while(escolha!=2);

    return 0;
}