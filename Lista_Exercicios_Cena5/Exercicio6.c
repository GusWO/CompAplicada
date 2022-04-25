#include <stdio.h>

#define TAM 5

int main(int argc, char const *argv[])
{
    int mat[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf(" [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf(" %2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("A diagonal secundária é: ");
    for (int i = 0; i < TAM; i++)
    {
        printf(" %d ", mat[i][TAM - 1 - i]);
    }
    printf("\n");
    
}
