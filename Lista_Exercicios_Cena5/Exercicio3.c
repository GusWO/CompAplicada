#include <stdio.h>

#define TAM 8

int main(int argc, char const *argv[])
{
    int vet[TAM];
    int somaVal = 0;

    //a)
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite os valores: ");
        scanf("%d", &vet[i]);
        printf("\n");
    }

    //b)
    for (int i = 0; i < TAM; i++)
    {
        somaVal = vet[0] + vet[4] + vet[7];
    }

    printf("A soma dos valores tal ali é de: %d \n", somaVal);

    //c)
    for (int i = 0; i < TAM; i++)
    {
        vet[4] = 50;
    }

    //d)
    for (int i = 0; i < TAM; i++)
    {
        printf("[%d] ", vet[i]);
    }
    printf("\n");
    
    
    
    
}
