#include <stdio.h>

#define TAM 10

int main(int argc, char const *argv[])
{

    int vetPar[TAM];
    int vetImpar[TAM];
    int nro = 0;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite nros para preencher os vetores: ");
        scanf("%d", &nro);

        if(i % 2 == 0){

            vetPar[i] = nro;
        }
        else if (i % 2 == 1)
        {
            vetImpar[i] = nro;
        }
        
    }

    printf("Vetor par: ");

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", vetPar[i]);
    }

    printf("\n");

    printf("Vetor ímpar: ");

    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", vetImpar[i]);
    }
    
    
    
}
