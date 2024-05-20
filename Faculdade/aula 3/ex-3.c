// Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.
#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior = 0;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num1);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num2);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num3);

    maior = num1;

    if(num2 > num1 && num2 > num3){
        maior = num2;
    }
    if(num3 > num1 && num3 > num2){
        maior = num3;
    }

    printf("\nO número maior é: %d\n", maior);

    return 0;
}