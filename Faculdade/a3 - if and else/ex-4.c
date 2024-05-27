// Ler 3 valores (considere que não serão informados valores iguais) e escrever a soma dos 2 maiores.
#include <stdio.h>

int main(){
    int num1, num2, num3;
    int maior, medio;

    printf("Escreva um número inteiro: ");
    scanf("%d", &num1);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num2);

    printf("Escreva outro número inteiro: ");
    scanf("%d", &num3);

    maior = num1;
    medio = num2;

    if(num3 > num1 && num3 > num2){
        maior = num3;

        if(num1 > num2){
            medio = num1;
        }

    } else if(num3 > num1 || num3 > num2){
        medio = num3;

        if(num2 > num1){
            maior = num2;
        }

    } else if(num2 > num1){
        maior = num2;
        medio = num1;
    }

    // outra forma:
    //
    // int primeiroMaior, segundoMaior;
    // if(num1 > num2){
    //     primeiroMaior = num1;
    //     if(num2 > num3){
    //         segundoMaior = num2;
    //     } else{
    //         segundoMaior = num3;
    //     }
    // } else{
    //     primeiroMaior = num2;
    //     if(num3 > num1){
    //         segundoMaior = num3;
    //     } else{
    //         segundoMaior = num1;
    //     }
    // } 

    printf("\nOs dois maiores números são: %d e %d\n", maior, medio);
    printf("A soma é igual à: %d\n", maior + medio);

    return 0;
}