#include <stdio.h>
#include <string.h>

struct biblioteca
{
    char tituloDoLivro[100];
    char autor[100];
    int numeroRegistro;
    float preco;
};

struct biblioteca somarLivros(struct biblioteca livro1, struct biblioteca livro2)
{
    struct biblioteca livroSomado;

    livroSomado.numeroRegistro = livro1.numeroRegistro + livro2.numeroRegistro;
    livroSomado.preco = livro1.preco + livro2.preco;

    strcpy(livroSomado.tituloDoLivro, livro1.tituloDoLivro);
    strcpy(livroSomado.autor, livro1.autor);

    return livroSomado;
}

int main()
{
    struct biblioteca i;
    struct biblioteca j;

    printf("=========INSERIR AO ARMAZEM===========\n");
    printf("Nome do livro 1: ");
    fgets(i.tituloDoLivro, sizeof(i.tituloDoLivro), stdin);
    i.tituloDoLivro[strcspn(i.tituloDoLivro, "\n")] = '\0';

    printf("Nome do autor: ");
    fgets(i.autor, sizeof(i.autor), stdin);
    i.autor[strcspn(i.autor, "\n")] = '\0';

    printf("Qual o preco deste livro: ");
    scanf("%f", &i.preco);
    printf("O registro sera: ");
    scanf("%d", &i.numeroRegistro);
    getchar();

    printf("=========INSERIR AO ARMAZEM===========\n");
    printf("Nome do livro 2: ");
    fgets(j.tituloDoLivro, sizeof(j.tituloDoLivro), stdin);
    j.tituloDoLivro[strcspn(j.tituloDoLivro, "\n")] = '\0';

    printf("Nome do autor: ");
    fgets(j.autor, sizeof(j.autor), stdin);
    j.autor[strcspn(j.autor, "\n")] = '\0';

    printf("Qual o preco deste livro: ");
    scanf("%f", &j.preco);
    printf("O registro sera: ");
    scanf("%d", &j.numeroRegistro);

    struct biblioteca livroSomado = somarLivros(i, j);

    printf("==============DADOS SALVOS============\n");
    printf("Livro 1: %s\n", i.tituloDoLivro);
    printf("Autor 1: %s\n", i.autor);
    printf("Valor 1: %.2f\n", i.preco);
    printf("ID 1: %d\n", i.numeroRegistro);

    printf("Livro 2: %s\n", j.tituloDoLivro);
    printf("Autor 2: %s\n", j.autor);
    printf("Valor 2: %.2f\n", j.preco);
    printf("ID 2: %d\n", j.numeroRegistro);

    printf("\n=============RESULTADO OBTIDO============\n");
    printf("Titulo: %s\n", livroSomado.tituloDoLivro);
    printf("Autor: %s\n", livroSomado.autor);
    printf("Registro Total: %d\n", livroSomado.numeroRegistro);
    printf("Preco Total: %.2f\n", livroSomado.preco);

    return 0;
}
