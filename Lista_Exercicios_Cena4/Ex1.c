#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nro = 0;
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um nro: ");
        scanf("%d", &nro);

        printf("\n");

        soma = soma + nro;

        printf("A soma vai ser: %d \n", soma);    
    }
    
}
