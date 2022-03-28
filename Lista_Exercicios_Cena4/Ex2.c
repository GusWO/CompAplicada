#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int result = 0;
    int nro = 0;

    int op = 0;

    printf("Digite 1 para iniciar a construção de uma tabuada: ");
    scanf("%d", &op);
    printf("\n");

    while (op == 1) // isso aqui n precisa fazer...
    {
        printf("Digite um nro para obter sua tabuada: \n");
        scanf("%d", &nro);

        for (int i = 0; i < 11; i++)
        {
            result = nro * i;

            printf("%d X %d = %d \n", nro, i, result);
        }

        printf("Digite 1 para continuar ou qualquer outro nro para finalizar \n");
        scanf("%d", &op);
    }
    

    
    
}
