#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nro = 0;
    int soma = 0;

    printf("Digite um nro: ");
    scanf("%d", &nro);
    printf("\n");

    while(nro > 0){

        soma = soma + nro;

        printf("A soma é: %d\n", soma);

        printf("Digite outro nro para somar: ");
        scanf("%d", &nro);
        printf("\n");
    }
}
