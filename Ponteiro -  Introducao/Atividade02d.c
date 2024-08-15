#include <stdio.h>
#include <string.h>

//sair do 65, passar pro 9 e incrementar 1, e ir pro 4
int main(){
    int vetor[10] = {8, 7, 11, 48, 52, 2, 24, 65, 9, 4};
    int *ponteiro = &vetor[8];
    for(int i=0;i<10;i++){
        if(i==9){
            printf("Posicao 9: %d\n", ++(*ponteiro));
        }
    }
    return 0;
}