#include <stdio.h>
#include <string.h>

int main(){
    
    int primeiroPonteiro;
    int* segundoPonteiro = &primeiroPonteiro;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &primeiroPonteiro);
    getchar();

    printf("O valor do primeiro ponteiro: %d\nO endereco dele e: %p", primeiroPonteiro, segundoPonteiro);
    
    return 0;
}