#include <stdio.h>
#include <string.h>

#define TOTAL_VEICULOS 11

typedef struct
{
    int anoFabricacao;
    int anoModelo;
    float preco;
    char fabricante[50];
    char modelo[50];
    char cor[20];
    int potencia;
    char placa[10];
} Veiculo;

int main()
{
    Veiculo veiculos[TOTAL_VEICULOS];
    int i=0;

    for (i = 0; i < TOTAL_VEICULOS; i++)
    {
        printf("CADASTRO DO VEICULO %d\n", i + 1);

        printf("ANO DE FABRICACAO: ");
        scanf("%d", &veiculos[i].anoFabricacao);

        printf("ANO MODELO: ");
        scanf("%d", &veiculos[i].anoModelo);

        printf("PRECO: ");
        scanf("%f", &veiculos[i].preco);
        getchar(); // Limpa o buffer do scanf

        printf("FABRICANTE: ");
        fgets(veiculos[i].fabricante, sizeof(veiculos[i].fabricante), stdin);
        veiculos[i].fabricante[strcspn(veiculos[i].fabricante, "\n")] = '\0'; // Remove o '\n' do final

        printf("MODELO: ");
        fgets(veiculos[i].modelo, sizeof(veiculos[i].modelo), stdin);
        veiculos[i].modelo[strcspn(veiculos[i].modelo, "\n")] = '\0'; // Remove o '\n' do final

        printf("COR: ");
        fgets(veiculos[i].cor, sizeof(veiculos[i].cor), stdin);
        veiculos[i].cor[strcspn(veiculos[i].cor, "\n")] = '\0'; // Remove o '\n' do final

        printf("POTENCIA: ");
        scanf("%d", &veiculos[i].potencia);
        getchar(); // Limpa o buffer do scanf

        printf("PLACA: ");
        fgets(veiculos[i].placa, sizeof(veiculos[i].placa), stdin);
        veiculos[i].placa[strcspn(veiculos[i].placa, "\n")] = '\0'; // Remove o '\n' do final

        printf("\n");
    }

    int escolha;
    printf("QUAL VEICULO DESEJA VISUALIZAR: (1 a %d): ", TOTAL_VEICULOS);
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= TOTAL_VEICULOS)
    {
        i = escolha - 1;
        printf("Informações do veículo %d:\n", escolha);
        printf("Ano de fabricação: %d\n", veiculos[i].anoFabricacao);
        printf("Ano do modelo: %d\n", veiculos[i].anoModelo);
        printf("Preço: %.2f\n", veiculos[i].preco);
        printf("Fabricante: %s\n", veiculos[i].fabricante);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Cor: %s\n", veiculos[i].cor);
        printf("Potência: %d\n", veiculos[i].potencia);
        printf("Placa: %s\n", veiculos[i].placa);
    }
    else
    {
        printf("NUMERO DE VEICULO INVALIDO.\n");
    }

    return 0;
}
