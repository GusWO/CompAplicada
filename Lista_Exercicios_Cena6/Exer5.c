#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[10][20];
    int i, j;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %dº nome \n", i+1);
        scanf("%s", &nome[i]);
    }

    for ( j = 0; j < 10; j++)
    {
        printf("[%d] = %s \n", j, nome[j]);
    }
    
    
}
