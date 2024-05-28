//Faça somatória dos números de 1 à 100
#include <stdio.h>

int main(){

    int soma;

    for(int i = 1; i <= 100; i++){
        printf("%d ", i);
        soma = soma + i;
    }

    printf("\n\nA soma é igual à: %d\n", soma);

    return 0;
}