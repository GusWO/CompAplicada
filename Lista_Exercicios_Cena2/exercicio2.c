#include <math.h>
#include <stdio.h>

void Quadrado();
void Cubo();

int main(int argc, char const *argv[])
{

    int nro;

    printf("Digite um nro: ");
    scanf("%d", &nro);

    Quadrado(nro);
    Cubo(nro);    
}

void Quadrado(int x){

    printf("O quadrado do número %d é igual a: %d \n", x, (x*x));
}

void Cubo(int x){
    
    printf("O cubo do número %d é igual a: %d \n", x, (x*x*x));
}