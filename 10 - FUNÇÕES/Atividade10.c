#include <stdio.h>
#include <math.h>

double HipotenusaCalculadora(double CatetoA, double CatetoB)
{
    double hipotenusa;

    hipotenusa = sqrt(CatetoA * CatetoA + CatetoB * CatetoB);

    return hipotenusa;
}

int main(){
    double CatetoA, CatetoB, hipotenusa;

    printf("Digite o  cateto A: ");
    scanf("%lf", &CatetoA);

    printf("Digite o  cateto B: ");
    scanf("%lf", &CatetoB);

    hipotenusa = HipotenusaCalculadora(CatetoA, CatetoB);

    printf("A hipotenusa encontrada com esses dois catetos foi: %.2lf\n", hipotenusa);

    return 0;
}