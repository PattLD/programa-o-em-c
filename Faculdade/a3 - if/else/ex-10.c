// Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres 
// (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). 
// Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.
#include <stdio.h>

int main(){
    int h1, h2, m1, m2;
    int hVelho, hNovo, mVelha, mNova;

    printf("Escreve a idade do primeiro homem: ");
    scanf("%d", &h1);
    printf("Escreve a idade do segundo homem: ");
    scanf("%d", &h2);
    printf("Escreve a idade da primeira mulher: ");
    scanf("%d", &m1);
    printf("Escreve a idade da segunda mulher: ");
    scanf("%d", &m2);

    mVelha = m1;
    mNova = m2;
    hVelho = h1;
    hNovo = h2;

    if(m2 > m1){
        mVelha = m2;
        mNova = m1;
    }

    if(h2 > h1){
        hVelho = h2;
        hNovo = h1;
    }

    printf("A soma das idades do homem mais velho com a mulher mais nova:\n%d + %d = %d\n", hVelho, mNova, hVelho+mNova);
    printf("O produto das idades do homem mais novo com a mulher mais velha:\n%d x %d = %d\n", hNovo, mVelha, hNovo*mVelha);

    return 0;
}