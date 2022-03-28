#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    int maior = 0;
    

    printf("Digite os valores de A, B e C respectivamente: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c && a > maior){
        maior = a;
        printf("O maior é o %d \n", maior);
    }
    else if (b > a && b > c && b > maior)
    {
        maior = b;
        printf("O maior é o %d \n", maior);
    }
    else if (c > a && c > b && c > maior)
    {
        maior = c;
        printf("O maior é o %d \n", maior);
    }else {
        
        printf("São iguais\n");
    }
    

    
    
    
}
