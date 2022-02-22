#include <stdio.h>
#include <math.h>

void leECalcula();

int main(int argc, char const *argv[])
{
    leECalcula();
}

void leECalcula(){
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    
    printf("\n");
    
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int soma = a + b;

    printf("Soma é: %d \n", soma);

    int produto = a * b;

    printf("Produto é: %d \n", produto);

    float media = soma/2;

    printf("Media é: %.2f \n", media);
}
