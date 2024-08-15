#include <stdio.h>
#include <string.h>

int main(){
    int i=0;
    int vetor[9] = {8, 7, 11, 48, 52, 2, 24, 65, 9};
    int *ponteiro = &vetor[3];
    for(i=0;i<9;i++){
        if(i==3){
            printf("%d", ++(*ponteiro));
        }
    }
return 0;
}
