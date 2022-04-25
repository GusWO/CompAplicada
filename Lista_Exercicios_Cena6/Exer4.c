#include <stdio.h>

int main()
{
    int vet[3][5], par = 0, impar = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" [%d] [%d] = ", i, j);
            scanf("%d", &vet[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d ", vet[i][j]);
        }
        printf("\n");
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vet[i][j] % 2 == 0)
            {
                par++;
            }
            else if (vet[i][j] % 2 == 1)
            {
                impar++;
            }      
            
        } 
    }

    printf("Nessa matriz há %d nros pares e %d nros ímpares \n", par, impar);


    
    
}