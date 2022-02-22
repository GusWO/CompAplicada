#include <stdio.h>

void algo();

int main(int argc, char const *argv[])
{
    algo();
}

void algo(){
    
    int a, b;

    a = 2;
    b = 3;

    printf("A: %d | B: %d \n", a, b);

    printf("Vamos trocar os valores das variáveis A e B \n");

    printf("A: ");
    scanf("%d", &a);

    printf("\n\n");

    printf("B: ");
    scanf("%d", &b);

    printf("O novo valor de A é %d e o novo valor de B é %d \n", a, b);

}
