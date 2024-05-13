#include <stdio.h>

int main (){

    int dado;
    printf("Digite um valor:");
    scanf("%d", &dado);

    dado++;
    printf("Depois do incremento eh igual a: %d\n", dado);
    dado--;
    printf("Depois do decremento eh igual a: %d\n", dado);
    dado += 3;
    printf("Depois do incremento de 3 eh igual a: %d\n", dado);
    dado -= 2;
    printf("Depois do decremento de 2 eh igual a: %d\n", dado);
    dado *= 8;
    printf("Depois da atribuicao de multiplicacao de 8 eh igual a: %d\n", dado);
    dado /= 2;
    printf("Depois da atribuicao de divisao de 2 eh igual a: %d\n", dado);

    return 0;

}