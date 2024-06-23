#include <stdio.h>
#include <stdlib.h>

int main(){
    // cls -> windows | clear -> linux
    system("clear");

    int n1, n2;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro:\n");
    scanf("%d", &n2);

    int num;
    printf("Que operacao gostaria de fazer com esses numeros?\n");
    printf("Para soma (+): digite 1.\n");
    printf("Para divisao (%%): digite 2.\n");
    printf("Para multiplicacao (x): digite 3.\n");
    printf("Para divisao (%%): digite 4.\n");
    scanf("%d", &num);

    int soma = n1 + n2;
    int subtracao = n1 - n2;
    int multiplicacao = n1 * n2;
    float divisao = (float)n1 / (float)n2;
    //variavel dentro do switch nao deu certo

    switch (num){
        case 1:
            printf("%d + %d = %d\n", n1, n2, soma);
            break;
        case 2:
            printf("%d - %d = %d\n", n1, n2, subtracao);
            break;
        case 3:
            printf("%d x %d = %d\n", n1, n2, multiplicacao);
            break;
        case 4:
            printf("%d %% %d = %.1f\n", n1, n2, divisao);
            break;
        default:
            printf("Valor invalido.\n");
            break;
    }

    return 1;
}