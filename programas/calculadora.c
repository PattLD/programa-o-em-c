#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    float n1, n2;

    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite outro numero:\n");
    scanf("%f", &n2);

    int num;
    printf("Que operacao gostaria de fazer com esses numeros?\n");
    printf("Para soma (+): digite 1.\n");
    printf("Para divisao (%%): digite 2.\n");
    printf("Para multiplicacao (x): digite 3.\n");
    printf("Para divisao (%%): digite 4.\n");
    scanf("%d", &num);

    float soma = n1 + n2;
    float subtracao = n1 - n2;
    float multiplicacao = n1 * n2;
    float divisao = n1 / n2;
    //variavel dentro do switch nao deu certo

    switch (num){
        case 1:
            printf("%.1f + %.1f = %.1f.\n", n1, n2, soma);
            break;
        case 2:
            printf("%.1f - %.1f = %.1f.\n", n1, n2, subtracao);
            break;
        case 3:
            printf("%.1f x %.1f = %.1f.\n", n1, n2, multiplicacao);
            break;
        case 4:
            printf("%.1f %% %.1f = %.1f.\n", n1, n2, divisao);
            break;
        default:
            printf("Valor invalido.\n");
            break;
    }

    return 1;
}