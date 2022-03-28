#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    int op = 0;
    int soma = 0;
    int sub = 0;
    float div = 0;
    int mul = 0;

    printf("1 - Soma | 2 - Subtração | 3 - Divisão | 4 - Multiplicação | 5 - Sair \n");
    scanf("%d", &op);

    while (op != 5)
    {
        switch (op)
        {
            case 1:
                printf("Digite o n1 e o n2 para somar:\n");
                scanf("%d", &n1);
                scanf("%d", &n2);
                
                soma = n1 + n2;

                printf("A soma é: %d \n", soma);

                printf("Escolha uma opção");
                scanf("%d", &op);
                break;
            
            case 2:
                printf("Digite o n1 e o n2 para subtrair:\n");
                scanf("%d", &n1);
                scanf("%d", &n2);
                
                sub = n1 - n2;

                printf("A subtração é: %d \n", sub);

                printf("Escolha uma opção \n");
                scanf("%d", &op);
                break;
            
            case 3:
                printf("Digite o n1 e o n2 para dividir:\n");
                scanf("%d", &n1);
                scanf("%d", &n2);
                
                div = n1 / n2;

                printf("A divisão é: %.2f \n", div);

                printf("Escolha uma opção \n");
                scanf("%d", &op);
                break;

            case 4:
                printf("Digite o n1 e o n2 para multiplicar:\n");
                scanf("%d", &n1);
                scanf("%d", &n2);
                
                mul = n1 * n2;

                printf("A multiplicação é: %d \n", mul);

                printf("Escolha uma opção: \n");
                scanf("%d", &op);
                break;
            case 5:
                printf("Saindo do programa\n");
                break;
        }
    }
    

}
