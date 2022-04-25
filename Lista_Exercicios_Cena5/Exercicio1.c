#include <stdio.h>
#define TAM 10

int main(int argc, char const *argv[])
{
    int vet[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Digita os nro ai: ");
        scanf("%d", &vet[i]);
        vet[i] = i;
        
    }

    for (int j = 0; j < TAM; j++)
    {
        printf("%d \n", vet[j]);
    }
    
    for (int k = 0; k < TAM; k++)
    {
        printf("%d \n", vet[TAM - k]);
    }
    
    
    
}
