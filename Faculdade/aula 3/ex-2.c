// Ler um número inteiro e verificar se ele é par ou ímpar.
#include <stdio.h>

int main(){
    int num;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nEste número é par.\n");
    } else{
        printf("\nEste número é impar.\n");
    }

    return 0;
}