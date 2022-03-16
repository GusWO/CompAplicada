#include <stdio.h>
#include <math.h>

void maior();

int main(int argc, char const *argv[])
{
    maior();
}

void maior(){

    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;

    printf("Digite os nros para saber qual o maior: \n");
    printf("Valor do A: ");
    scanf("%d", &a);
    printf("\n");

    printf("Valor do B: ");
    scanf("%d", &b);
    printf("\n");

    printf("Valor do C: ");
    scanf("%d", &c);
    printf("\n");

    if(a > b && a > c && a > maior){
        maior = a;
        printf("O maior é nro: %d \n", maior);
    }
    else if(b > a && b > c && b > maior){
        maior = b;
        printf("O maior é o nro: %d \n", maior);
    }
    else if(c > a && c > b && c > maior){
        maior = c;
        printf("O maior é o nro: %d \n", maior);
    }
    
}
