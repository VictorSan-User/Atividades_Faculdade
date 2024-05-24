#include <stdio.h>
#include <string.h>

int main()
{
    char input[50];
    int i = 0;

    printf("DIGITE UMA STRING:");
    fgets(input, sizeof(input), stdin);

    printf("\nA STRING FOI:");
    int length = strlen(input);

    for (i = 0; i < length; i++)
    {
        printf("%c", input[i]);
    }
    return 0;
}