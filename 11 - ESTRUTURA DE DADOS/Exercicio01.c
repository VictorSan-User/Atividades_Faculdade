#include <stdio.h>
#include <string.h>

struct Caracteristica
{
    int mamifero;
    int habitat;
    int ovos;
    int veneno;
    int noturno
};

typedef struct
{
    int mamifero;
    int habitat;
    int ovos;
    int veneno;
    int noturno;
} Ornitorrinco;

int main()
{
    Ornitorrinco m1 = {1, 1, 1, 1, 1};
    printf("==================================O ORNITORRINCO=====================================\n");

    if (m1.mamifero == 1 && m1.habitat == 1 && m1.ovos == 1 && m1.veneno == 1 && m1.noturno == 1)
    {
        printf("1 - O ornitorrinco e um animal mamifero                                             |\n");
        printf("2 - O habitat do ornitorrinco sao rios e lagos da Australia Oriental e da Tasmnia   |\n");
        printf("3 - Este animal, mesmo sendo mamifero, botam OVOS!                                  |\n");
        printf("4 - Possui veneno! Nao era pra menos vindo da Australia                             |\n");
        printf("5 - Este animal e noturno                                                           |\n");
        printf("====================================================================================\n");
    }
    else
    {
    }
    return 0;
}