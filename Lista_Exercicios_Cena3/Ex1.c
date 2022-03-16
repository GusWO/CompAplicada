#include <stdio.h>
#include <math.h>

void imparOuPar();

int main(int argc, char const *argv[])
{
    int nro = 0;
    printf("Digite um nro: ");
    scanf("%d", &nro);
    printf("\n");

    imparOuPar(nro); 
}

void imparOuPar(int x){

    if(x % 2 == 0){

        printf("O nro digitado é par: %d \n", x);
    }
    else if(x % 2 == 1){

        printf("O nro digitado é impar: %d \n", x);
    }
}
