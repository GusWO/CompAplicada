#include <stdio.h>


main()
{
    FILE *arq;
    int vet[15], nro;

    /*
    arq = fopen("Exercicio1.txt", "w");

    for (int i = 0; i < 15; i++)
    {
        printf("Posição %d = ", i);
        scanf("%d", &vet[i]);
    }

    if (arq == NULL)
    {
        printf("\n Erro \n");
    }
    else {
        for (int i = 0; i < 15; i++)
        {
            printf("%d \n", vet[i]);
            fprintf(arq, "%d\n", vet[i]);
        }
    }

    fclose(arq);

    */

    arq = fopen("Exercicio1.txt", "r");

    if (arq == NULL)
    {
        printf(" \nErro \n");
    }
    else {
        while (fscanf(arq, "%d", &nro) != EOF)
        {
            printf("%d\n", nro);
        }
        fclose(arq);
    }
    
    
    
    
    
}