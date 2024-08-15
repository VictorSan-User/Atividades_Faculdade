#include <stdio.h>
#include <string.h>

int main(){
    int vetor[5]= {10,20,30,40,50};
    int *ptr = vetor;

    ptr+=2;

    printf("%d\n", ptr[3]);
    printf("%p\n", &ptr[0]);

    return 0;
}