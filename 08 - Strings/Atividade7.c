#include <stdio.h>

int main()
{
    char nomeMercadoria[100]; // String para armazenar o nome da mercadoria
    float valorTotal, desconto, valorAVista;

    // Solicita ao usuário o nome da mercadoria e o valor total
    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin); // Lê uma linha de texto, até encontrar uma quebra de linha

    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valorTotal);

    // Calcula o desconto de 10% para pagamento à vista
    desconto = 0.10 * valorTotal;
    valorAVista = valorTotal - desconto;

    // Exibe as informações
    printf("\n========== Informacoes sobre a Mercadoria =======\n");
    printf("Nome: %s\n", nomeMercadoria);
    printf("Valor Total: R$ %.2f\n", valorTotal);
    printf("Desconto (10%%): R$ %.2f\n", desconto);
    printf("Valor a ser pago a vista: R$ %.2f\n", valorAVista);

    return 0;
}
