#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 50
int id = 0;

typedef struct novo_aluno
{
    char nome[255];
    int idade;
    char CPF[12];
    char genero;
    float notas[4];
    float media;
} Aluno;

void CadastrarAluno(Aluno *pessoa)
{
    printf("----------CADASTRO DE ALUNOS-------------\n");

    printf("DIGITE O NOME DO ALUNO: ");
    fgets(pessoa->nome, 255, stdin);
    pessoa->nome[strcspn(pessoa->nome, "\n")] = '\0'; // Remove newline

    printf("DIGITE A IDADE DO ALUNO: ");
    scanf("%d", &pessoa->idade);
    while (getchar() != '\n')
        ;

    printf("DIGITE O CPF DO ALUNO: ");
    fgets(pessoa->CPF, 12, stdin);
    pessoa->CPF[strcspn(pessoa->CPF, "\n")] = '\0'; // Remove newline

    printf("QUAL O GENERO DO ALUNO (M/F): ");
    scanf("%c", &pessoa->genero);
    while (getchar() != '\n')
        ;

    pessoa->media = 0.0; // Inicializando a média com 0
    id++;
}

void InserirNotasAluno(Aluno *pessoa)
{
    printf("DIGITE AS NOTAS DO ALUNO %s\n", pessoa->nome);

    for (int i = 0; i < 4; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%f", &pessoa->notas[i]);
    }

    pessoa->media = 0.0;
    for (int i = 0; i < 4; i++)
    {
        pessoa->media += pessoa->notas[i];
    }
    pessoa->media /= 4.0;
}

void ExibirDadosAluno(Aluno aluno[], int qtd_alunos)
{
    for (int i = 0; i < qtd_alunos; i++)
    {
        printf("\n----------DADOS DO ALUNO %d-------------\n", i + 1);
        printf("NOME: %s\n", aluno[i].nome);
        printf("IDADE: %d\n", aluno[i].idade);
        printf("CPF: %s\n", aluno[i].CPF);
        printf("GENERO: %c\n", aluno[i].genero);
        printf("NOTAS: %.2f, %.2f, %.2f, %.2f\n", aluno[i].notas[0], aluno[i].notas[1], aluno[i].notas[2], aluno[i].notas[3]);
        printf("MEDIA: %.2f\n", aluno[i].media);
        printf("-------------------------------------------\n");
    }
}

void AtualizarMediaDisciplina(Aluno aluno[], int qtd_alunos)
{
    float media_total = 0.0;
    for (int i = 0; i < qtd_alunos; i++)
    {
        media_total += aluno[i].media;
    }
    float media_disciplina = media_total / qtd_alunos;
    printf("MEDIA DA DISCIPLINA: %.2f\n", media_disciplina);
}

void BuscarAluno(Aluno aluno[], int qtd_alunos)
{
    char nome_busca[255];
    printf("DIGITE O NOME DO ALUNO QUE DESEJA BUSCAR: ");
    fgets(nome_busca, 255, stdin);
    nome_busca[strcspn(nome_busca, "\n")] = '\0'; // Remove newline

    for (int i = 0; i < qtd_alunos; i++)
    {
        if (strcmp(aluno[i].nome, nome_busca) == 0)
        {
            printf("\n----------DADOS DO ALUNO %d-------------\n", i + 1);
            printf("NOME: %s\n", aluno[i].nome);
            printf("IDADE: %d\n", aluno[i].idade);
            printf("CPF: %s\n", aluno[i].CPF);
            printf("GENERO: %c\n", aluno[i].genero);
            printf("NOTAS: %.2f, %.2f, %.2f, %.2f\n", aluno[i].notas[0], aluno[i].notas[1], aluno[i].notas[2], aluno[i].notas[3]);
            printf("MEDIA: %.2f\n", aluno[i].media);
            printf("-------------------------------------------\n");
            return;
        }
    }
    printf("ALUNO NAO ENCONTRADO.\n");
}

int main()
{
    int opcao;
    Aluno pessoas[MAX_ALUNOS];
    int qtd_alunos = 0;
    char continuar;

    do
    {
        if (qtd_alunos < MAX_ALUNOS)
        {
            CadastrarAluno(&pessoas[qtd_alunos]);
            qtd_alunos++;

            printf("\nDESEJA CADASTRAR MAIS UM ALUNO? (S/N): ");
            scanf("%c", &continuar);
            while (getchar() != '\n')
                ;
            if (continuar == 's' || continuar == 'S')
            {
                // Use "clear" instead of "cls" for portability to Unix-like systems
                system("cls");
            }
        }
        else
        {
            printf("LIMITE MAXIMO DE ALUNOS ATINGIDO.\n");
            break;
        }
    } while (continuar == 'S' || continuar == 's');

    while (1)
    {
        if (qtd_alunos > 0)
        {
            printf("\nO QUE DESEJA FAZER COM O BANCO DE ALUNOS CADASTRADOS:\n");
            printf("---------------------------------------------------------\n");
            printf("1- Exibir alunos cadastrados.\n");
            printf("2- Cadastrar notas de cada aluno.\n");
            printf("3- Inserir a nota por aluno.\n");
            printf("4- Acompanhar a media da disciplina.\n");
            printf("5- Buscar aluno.\n");
            printf("6- Acrescentar um aluno novato.\n");
            printf("7- Sair\n");
            scanf("%d", &opcao);
            while (getchar() != '\n')
                ;

            switch (opcao)
            {
            case 1:
                system("cls");
                ExibirDadosAluno(pessoas, qtd_alunos);
                break;
            case 2:
                system("cls");
                for (int i = 0; i < qtd_alunos; i++)
                {
                    InserirNotasAluno(&pessoas[i]);
                }
                break;
            case 3:
                system("cls");
                ExibirDadosAluno(pessoas, qtd_alunos);
                break;
            case 4:
                system("cls");
                AtualizarMediaDisciplina(pessoas, qtd_alunos);
                break;
            case 5:
                system("cls");
                BuscarAluno(pessoas, qtd_alunos);
                break;
            case 6:
                if (qtd_alunos < MAX_ALUNOS)
                {
                    system("cls");
                    CadastrarAluno(&pessoas[qtd_alunos]);
                    qtd_alunos++;
                    printf("\nDESEJA CADASTRAR MAIS UM ALUNO? (S/N): ");
                    scanf("%c", &continuar);
                    while (getchar() != '\n')
                        ;
                    if (continuar == 's' || continuar == 'S')
                    {
                        system("cls");
                    }
                }
                else
                {
                    printf("LIMITE MAXIMO DE ALUNOS ATINGIDO.\n");
                }
                break;
            case 7:
                printf("Saindo...\n");
                return 0;
            default:
                printf("OPCAO INVALIDA.\n");
                break;
            }
        }
    }
    return 0;
}
