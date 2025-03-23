#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"funcoes.h"

int main(){
    int opcao, quantidade_arr;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &quantidade_arr);

    int *arr = malloc(quantidade_arr* sizeof(int));
    if(!arr){
        printf("Array nao alocado corretamente!\n");
        exit(1);
    }

    do
    {
        printf("\nSelecione:\n1 - Criar Vetor Aleatorio.\n2 - OrdenarCrescente.\n3 - Ordenar Decrescente.\n4 - Limpar Tela.\n5 - Sair\n:");
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            CriarVetor(arr, quantidade_arr);
            break;
        case 2:
            ShellSort_Crescente(arr, quantidade_arr);
            break;
        case 3:
            ShellSort_Decrescente(arr, quantidade_arr);
            break;
        case 4:
            LimparTela();
            break;
        case 5:
            printf("Saindo. . .\n");
            break;
        default:
            printf("Selecione uma opcao valida!\n");
            break;
        }
    } while (opcao!=5);
    
    free(arr);
    return 0;
}