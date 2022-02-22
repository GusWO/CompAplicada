#include <math.h>
#include <stdio.h>

void CalculaPerimetroRet();

int main(int argc, char const *argv[])
{
    CalculaPerimetroRet();
}

void CalculaPerimetroRet(){
    float P, comp, larg;

    printf("Digite o comprimento e a largura: \n");
    scanf(" %f ", &comp);
    scanf(" %f ", &larg);

    P = 2*(comp + larg);

    printf("O valor do perímetro é de: %.2f ", P);
}
