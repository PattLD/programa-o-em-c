#include <stdio.h>

int main(){
    
    int a, b, soma, subt, mult, div;
    printf("Digite um numero e aperte enter:\n");
    scanf("%d", &a);
    printf("Digite mais um numero e aperte enter:\n");
    scanf("%d", &b);
    //Nao esquecer a merda do &!!!

    soma = a + b;
    subt = a - b;
    mult = a * b;
    div = a / b;
    //como ja definiu o tipo de dado antes, nao precisa definir agora

    printf("\nResultados: \n");
    printf("Soma (%d + %d): %d.\n", a, b, soma);
    printf("Subtra. (%d - %d): %d.\n", a, b, subt);
    printf("Multip. (%d x %d): %d.\n", a, b, mult);
    printf("Divis. (%d / %d): %d.\n", a, b, div);

    return 0;
}