#include <stdio.h>

int main(){

    int num_Selecionado;

    printf("Defina o tamanho do vetor que ira preencher: ");
    scanf("%d",&num_Selecionado);
    
    int vet[num_Selecionado];
    for(int i=0;i<num_Selecionado;i++){
        printf("posicao %d: ",i+1);
        scanf("%d", &vet[i]);
    }

    return 0;
}