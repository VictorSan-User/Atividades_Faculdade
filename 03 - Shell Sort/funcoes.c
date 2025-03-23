#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"funcoes.h"
void ExibirVetor(int *vetor, int quant){
    for(int i = 0; i < quant; i++){
        printf("%d ", vetor[i]);
    }
}

void CriarVetor(int *vetor, int quant){
    srand(time(NULL));
    for(int i = 0; i < quant; i++){
        vetor[i] = rand() % 40;
    }
    ExibirVetor(vetor, quant);
}

void OrdenarInsertionSort_Crescente(int *vetor, int quant){
    int atual;
    int x, y;
    for(x = 1; x < quant; x++){
        atual = vetor[x];
        y = x - 1;
        while(y >=0 && atual < vetor[y]){
            vetor[y + 1] = vetor[y];
            y--;
        }
        vetor[y + 1] = atual;
    }
    ExibirVetor(vetor, quant);
}

void OrdenarInsertionSort_Decrescente(int *vetor, int quant){
    int atual;
    int x, y;
    for(x = 1; x < quant; x++){
        atual = vetor[x];
        y = x - 1;
        while(y >=0 && atual > vetor[y]){
            vetor[y + 1] = vetor[y];
            y--;
        }
        vetor[y + 1] = atual;
    }
    ExibirVetor(vetor, quant);
}

void LimparTela(){
    system("cls");
}

void ShellSort_Crescente(int *vetor, int quant) {
    int i, j, h, aux;
    // sequência de Knuth
    h = 1;
    while (h < quant) {
        h = 3 * h + 1;
    }

    // Loop de redução do intervalo
    while (h >= 1) {
        h /= 3;  // Reduz o intervalo
        
        // Ordenação parcial usando Insertion Sort modificado
        for (i = h; i < quant; i++) {
            aux = vetor[i];  // Armazena o valor atual
            j = i - h;
            
            // Desloca os elementos para frente
            while (j >= 0 && vetor[j] > aux) {
                vetor[j + h] = vetor[j];
                j -= h;
            }
            // Insere o valor na posição correta
            vetor[j + h] = aux;
        }
    }
    if(h == 1){
        OrdenarInsertionSort_Crescente(vetor, quant);
    }
    
    ExibirVetor(vetor, quant);
}

void ShellSort_Decrescente(int *vetor, int quant){
    int i, j, aux;
    int h = 1;
    while(h < quant){
        h = 3 * h + 1;
    }
    while(h >= 1){
        //inicio trabalhando o h
        h /= 3;
        //modificação parcial com insertion sort
        for(i = h; i < quant; i++){
            aux = vetor[i];
            j = i - h;
            while(j >=0 && aux > vetor[j]){
                vetor[j + h] = vetor[j];
                j -= h;
            }
            vetor[j + h] = aux;
        }
    }
    if(h == 1){
        OrdenarInsertionSort_Crescente(vetor, quant);
    }
    ExibirVetor(vetor, quant);
}