// Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se formam ou não um triângulo. 
// OBS: para formar um triângulo, o valor de cada lado deve ser menor que a soma dos outros 2 lados.
#include <stdio.h>

int main(){
    int lado1, lado2, lado3;

    printf("Escreva o valor de um lado de triângulo: \n");
    scanf("%d", &lado1);
    printf("Escreva o valor de outro lado de triângulo: \n");
    scanf("%d", &lado2);
    printf("Escreva o valor de outro lado de triângulo: \n");
    scanf("%d", &lado3);

    if(lado1 < lado2+lado3 && lado2 < lado1+lado3 && lado3 < lado1+lado2){
        printf("Esse é um triângulo válido.\n");
    } else{
        printf("Esse triângulo NÃO É válido!\n");
    }

    return 0;
}