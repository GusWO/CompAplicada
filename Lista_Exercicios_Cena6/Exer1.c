#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4];

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            matriz[i][j] = i + j + 1;
        }
        
    }

    printf("Matriz\n");

    for(int k = 0; k <= 3; k++){
        for (int l = 0; l <= 3; l++)
        {
            printf(" %d ", matriz[k][l]);
        }
        printf("\n");
    }

    printf("\n");
    printf("A diagonal principal é: \n");


    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++){

            if (i == j)
            {
                printf(" %d ", matriz[i][j]);
            }
            
        }
    }
    printf("\n");
    
    
}
