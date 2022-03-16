#include <stdio.h>
#include <math.h>

void verifica();

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;

    printf("Digite o valor de n1 ");
    scanf("%d", &n1);
    printf("\n");

    printf("Digite o valor de n2 ");
    scanf("%d", &n2);
    printf("\n");

    verifica(n1, n2);
}

void verifica(int n1, int n2){

    int maior = 0;
    int menor = 0;

    if(n1 > n2 > maior){

        maior = n1;
        menor = n2;
    }
    else if(n2 > n1 > maior){
        maior = n2;
        menor = n1;
    }

    printf("A ordem crescente vai ser: %d , %d \n", menor, maior);
}
