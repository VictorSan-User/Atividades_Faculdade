#ifndef PRODUTOS_H
#define PRODUTOS_H


typedef struct Produtos{
    int id;
    float Valor;
    char Nome[50];
    struct Produtos *proximo;
}Itens;

typedef struct{
    Itens *primeiro;
    Itens *ultimo; 
    int quantidade;
    float total;
}Lista;

void AdicionarProduto(Lista *lista);

void InsereNoiNICIO(Lista *lista);
void InsereNofIM(Lista *lista);

void ExibirItens(Lista *lista);
float ValorTotalLista(Lista *total);


#endif