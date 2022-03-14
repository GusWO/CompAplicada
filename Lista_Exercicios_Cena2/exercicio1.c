#include <stdio.h>

double media();

int main(int argc, char const *argv[])
{
    double a, b;

    printf("Digite o valor de A: ");
    scanf("%le", &a);

    printf("\n");

    printf("Digite o valor de B: ");
    scanf("%le", &b);

    double resultado = media(a,b);

    printf("\n");

    printf("A média de a e b é: %.2f \n", resultado);
}


double media(double a, double b){

    double media = (a+b)/2;

    return media;
}