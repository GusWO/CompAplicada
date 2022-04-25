#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][3];
    int nro = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nElemento [%d][%d] = ",i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    printf("Por qual nro vai multiplicar? \n");
    scanf("%d", &nro);
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", nro * matriz[i][j]);
        }
        printf("\n");
    }
    
    
}
