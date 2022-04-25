#include <stdio.h>

#define TAM 6

int main(int argc, char const *argv[])
{
    int vet[TAM];
    int nro = 0;
    int soma = 0;
    int media = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite nros aí: ");
        scanf("%d", &nro);
        printf("\n");

        vet[i] = nro;
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("%d \n", vet[i]);
    }
    

    for (int j = 0; j < TAM; j++)
    {
        soma = soma + vet[j];
    }

    media = soma/TAM;

    printf("A soma é %d, o tamanho do vetor é %d. Logo sua média será: %d \n", soma, TAM, media);
    
    
}
