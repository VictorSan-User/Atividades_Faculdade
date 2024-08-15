#include <stdio.h>
#include <string.h>

int main(){
    int vetor[5]= {10,20,30,40,50};
    int *ptr = &vetor[5];

    printf("%p", &ptr[0]);

    return 0;
}