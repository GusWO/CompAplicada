#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int quadrado = 0;
    int cubo = 0;

    for (int i = 1; i < 30; i++)
    {
        if(i % 2 == 0){
            quadrado = pow(i, 2);
            printf("O quadrado de %d é %d \n",i ,quadrado);
        }
        else if(i % 2 == 1){
            cubo = pow(i, 3);
            printf("O cubo de %d é %d \n", i, cubo);
        }
    }
    
}
