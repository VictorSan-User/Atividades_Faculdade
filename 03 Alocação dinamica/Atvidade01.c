#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 2

typedef struct {
    char nomeTitular[50];  
    int numero;
    double saldo;
} Conta;

typedef struct {
    Conta origem;
    Conta destino;
} Retorno;

Conta contas[MAX_CONTAS];

void CadastrarConta() {
    for (int i = 0; i < MAX_CONTAS; i++) {
        printf("Cadastro da Conta %d:\n", i + 1);
        printf("Nome do titular: ");
        fgets(contas[i].nomeTitular, 50, stdin);
        contas[i].nomeTitular[strcspn(contas[i].nomeTitular, "\n")] = 0;  // Remove o '\n'

        printf("Numero da conta: ");
        scanf("%d", &contas[i].numero);
        printf("Saldo inicial: ");
        scanf("%lf", &contas[i].saldo);
        getchar();  // Limpa o buffer de entrada

        printf("Conta %d cadastrada com sucesso!\n", i + 1);
    }
}

void Deposito(int indiceConta, double valor) {
    if (indiceConta < 0 || indiceConta >= MAX_CONTAS) {
        printf("Conta invalida!\n");
        return;
    }

    contas[indiceConta].saldo += valor;
    printf("Deposito realizado com sucesso! Saldo atual: %.2f\n", contas[indiceConta].saldo);
}

void Saque(int indiceConta, double valor) {
    if (indiceConta < 0 || indiceConta >= MAX_CONTAS) {
        printf("Conta invalida!\n");
        return;
    }

    if (contas[indiceConta].saldo < valor) {
        printf("Saldo insuficiente!\n");
    } else {
        contas[indiceConta].saldo -= valor;
        printf("Saque realizado com sucesso! Saldo atual: %.2f\n", contas[indiceConta].saldo);
    }
}

Retorno Transferencia(int origem, int destino, double valor) {
    Retorno resultado;

    if (origem < 0 || origem >= MAX_CONTAS || destino < 0 || destino >= MAX_CONTAS) {
        printf("Conta de origem ou destino invalida!\n");
        return resultado;
    }

    Saque(origem, valor);
    Deposito(destino, valor);

    resultado.origem = contas[origem];
    resultado.destino = contas[destino];

    return resultado;
}

int main() {
    int opcao, indiceConta, origem, destino;
    double valor;
    Retorno r1;

    CadastrarConta();

    while (1) {
        printf("\nEscolha uma operacao:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Transferir\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();  // Limpa o buffer de entrada

        switch (opcao) {
            case 1:
                printf("Numero da conta para deposito (1 ou 2): ");
                scanf("%d", &indiceConta);
                getchar();  // Limpa o buffer de entrada
                printf("Valor a depositar: ");
                scanf("%lf", &valor);
                Deposito(indiceConta - 1, valor);
                break;
            case 2:
                printf("Numero da conta para saque (1 ou 2): ");
                scanf("%d", &indiceConta);
                getchar();  // Limpa o buffer de entrada
                printf("Valor a sacar: ");
                scanf("%lf", &valor);
                Saque(indiceConta - 1, valor);
                break;
            case 3:
                printf("Numero da conta de origem (1 ou 2): ");
                scanf("%d", &origem);
                printf("Numero da conta de destino (1 ou 2): ");
                scanf("%d", &destino);
                printf("Valor a transferir: ");
                scanf("%lf", &valor);
                r1 = Transferencia(origem - 1, destino - 1, valor);
                printf("Transferencia realizada com sucesso!\n");
                break;
            case 4:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao inválida!\n");
        }
    }

    return 0;
}
