#include <stdio.h>
#include <math.h>

void fazSoma();

int main(int argc, char const *argv[])
{
    fazSoma();
}

void fazSoma(){

    int a = 0;
    int b = 0;
    int soma = 0;

    printf("Digite o valor do A: ");
    scanf("%d", &a);
    printf("\n");

    printf("Digite o valor do B: ");
    scanf("%d", &b);
    printf("\n");

    soma = a + b;

    if(soma > 10){
        
        soma = soma + 5;
    
    }else {
        soma = soma - 3;
    }

    printf("O resultado vai ser: %d \n", soma);
}
