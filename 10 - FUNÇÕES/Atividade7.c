#include <stdio.h>

int calcularMDC(int num1, int num2)
{
    int resto;

    while (num2 != 0)
    {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }

    return num1;
}

int calcularMMC(int num1, int num2)
{
    int mdc = calcularMDC(num1, num2);
    int mmc = (num1 * num2) / mdc;

    return mmc;
}

int main()
{
    int num1, num2, num3, mdc, mmc;

    printf("DIGITE TRES NUMEROS INTEIROS:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    mdc = calcularMDC(num1, num2);

    mmc = calcularMMC(calcularMMC(num1, num2), num3);

    printf("O MDC ENTRE %d E %d E: %d\n", num1, num2, mdc);
    printf("O MMC ENTRE %d, %d E %d E: %d\n", num1, num2, num3, mmc);

    return 0;
}
