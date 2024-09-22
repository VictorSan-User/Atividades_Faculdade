#include <stdio.h>
#include <string.h>

#define MAX_CONTAS 4

typedef struct {
    char nomeTitular[50];  
    int numero;
    double saldo;
} Conta;

typedef struct {
    Conta* origem;
    Conta* destino;
} Retorno;

Conta contas[MAX_CONTAS];

void CadastrarConta(Conta* conta) {
    printf("Nome do titular: ");
    fgets(conta->nomeTitular, 50, stdin);
    conta->nomeTitular[strcspn(conta->nomeTitular, "\n")] = 0;  

    printf("Numero da conta: ");
    scanf("%d", &conta->numero);
    printf("Saldo inicial: ");
    scanf("%lf", &conta->saldo);
    getchar();  
}

void Deposito(Conta* conta, double valor) {
    if (conta == NULL) {
        printf("Conta invalida!\n");
        return;
    }

    conta->saldo += valor;
    printf("Deposito realizado com sucesso! Saldo atual: %.2f\n", conta->saldo);
}

void Saque(Conta* conta, double valor) {
    if (conta == NULL) {
        printf("Conta invalida!\n");
        return;
    }

    if (conta->saldo < valor) {
        printf("Saldo insuficiente!\n");
    } else {
        conta->saldo -= valor;
        printf("Saque realizado com sucesso! Saldo atual: %.2f\n", conta->saldo);
    }
}

Retorno Transferencia(Conta* origem, Conta* destino, double valor) {
    Retorno resultado;
    if (origem == NULL || destino == NULL) {
        printf("Conta de origem ou destino invalida!\n");
        return resultado;
    }

    Saque(origem, valor);
    Deposito(destino, valor);

    resultado.origem = origem;
    resultado.destino = destino;

    return resultado;
}

int main() {
    int opcao, indiceConta, origem, destino;
    double valor;
    Retorno retornoTransferencia;

  
    for (int i = 0; i < MAX_CONTAS; i++) {
        printf("Cadastro da Conta %d:\n", i + 1);
        CadastrarConta(&contas[i]);
        printf("Conta %d cadastrada com sucesso!\n", i + 1);
    }

    while (1) {
        printf("\nEscolha uma operacao:\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Transferir\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1:
                printf("Numero da conta para deposito (1 a 4): ");
                scanf("%d", &indiceConta);
                getchar();  
                if (indiceConta < 1 || indiceConta > MAX_CONTAS) {
                    printf("Conta invalida!\n");
                    break;
                }
                printf("Valor a depositar: ");
                scanf("%lf", &valor);
                Deposito(&contas[indiceConta - 1], valor);
                break;
            case 2:
                printf("Numero da conta para saque (1 a 4): ");
                scanf("%d", &indiceConta);
                getchar(); 
                if (indiceConta < 1 || indiceConta > MAX_CONTAS) {
                    printf("Conta invalida!\n");
                    break;
                }
                printf("Valor a sacar: ");
                scanf("%lf", &valor);
                Saque(&contas[indiceConta - 1], valor);
                break;
            case 3:
                printf("Numero da conta de origem (1 a 4): ");
                scanf("%d", &origem);
                printf("Numero da conta de destino (1 a 4): ");
                scanf("%d", &destino);
                if (origem < 1 || origem > MAX_CONTAS || destino < 1 || destino > MAX_CONTAS) {
                    printf("Conta de origem ou destino invalida!\n");
                    break;
                }
                printf("Valor a transferir: ");
                scanf("%lf", &valor);
                retornoTransferencia = Transferencia(&contas[origem - 1], &contas[destino - 1], valor);
                printf("Transferencia realizada com sucesso!\n");
                break;
            case 4:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
