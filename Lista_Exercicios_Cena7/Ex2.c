#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    FILE *arq1, *arq2;
    
    int vet[20], i;
    
    arq1 = fopen("PAR.TXT", "w");
    arq2 = fopen("IMPAR.TXT", "w");
    
    for (i = 0; i < 20; i++)
    {
        vet[i] = i;
    }

    for ( i = 0; i < 20; i++)
    {
        if (vet[i] % 2 == 0)
        {
            
            fprintf(arq1, "%d \n", vet[i]);
        }
        else{
            
            fprintf(arq2, "%d\n", vet[i]);
        }
        
    }
    fclose(arq1);
    fclose(arq2);
    

}
