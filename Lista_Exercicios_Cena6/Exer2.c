#include <stdio.h>

int main(int argc, char const *argv[])
{

    int matriz[3][3], i, j;

    printf("Digite os valores \n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz: \n");

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", 2 * matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
