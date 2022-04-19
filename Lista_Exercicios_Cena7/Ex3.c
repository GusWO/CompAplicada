#include <stdio.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    FILE *arq1, *arq2;
    int vet[5][5], i, j;
    srand(time(NULL));

    arq1 = fopen("PRINC.TXT", "w");
    arq2 = fopen("SECUN.TXT", "w");

    for ( i = 0; i < 5; i++)
    {
        for (j  = 0; j < 5; j++)
        {
            vet[i][j] = i + j;
        } 
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf(" %d", vet[i][j]);
        }
        printf("\n");
        
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (i == j)
            {
                fprintf(arq1, " %d \n ", vet[i][j]);
                
            }
            else if (i + 1 && j - 1)
            {
                fprintf(arq2," %d", vet[i][j]);
                
            }
            
        }
        
    }
    


}
