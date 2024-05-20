#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior = 0;
    int medio = 0;
    int menor = 0;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num1);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num2);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num3);

    maior = num1;
    medio = num2;
    menor = num3;

    if(num3 > num1 && num3 > num2){
        maior = num3;

        if(num1 > num2){
            medio = num1;
            menor = num2;
        } else{
            menor = num1;
        }

    } else if(num3 > num1 || num3 > num2){
        medio = num3;

        if(num2 > num1){
            maior = num2;
            menor = num1;
        } else{
            menor = num2;
        }

    } else if(num2 > num1){
        maior = num2;
        medio = num1;
    }

    printf("\nA ordem crescente dos números é: %d, %d e %d\n", menor, medio, maior);

    return 0;
}