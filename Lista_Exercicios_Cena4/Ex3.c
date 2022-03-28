#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nro = 0;
    int fat = 0;
    int cont = 0;

    printf("Escreva um nro para obter seu fatorial: ");
    scanf("%d", &nro);
    printf("\n");

    
    for (fat = 1; nro > 1; nro = nro - 1)
    {
        fat = fat * nro;
    }
    
   

    printf("O fatorial é: %d \n", fat);

}
