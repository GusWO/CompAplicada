#include <stdio.h>
#include <math.h>

void volume();

int main(int argc, char const *argv[])
{
    volume();
}

void volume()
{
    float V, r, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    
    printf("\n");

    raio = pow(r, 3);

    V = (4/3) * M_PI * raio;

    printf("O valor do volume é de %f \n", V);
    

}
