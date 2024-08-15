#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num_Selecionado;
    int i, j;

    printf("Quantas posicoes deseja: ");
    scanf("%d", &i);

    num_Selecionado =  malloc(i*sizeof(int));
    
    for(j=0; j < i;j++){
        scanf("%d", &num_Selecionado[j]);
    }
    for(j=0;j< i ;j++){
        printf("\n%d\t", num_Selecionado[j]);
    }
    return 0;
}