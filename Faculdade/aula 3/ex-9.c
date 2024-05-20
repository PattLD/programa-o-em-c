// Faça um algoritmo para ler o valor do saque realizado pelo cliente de um banco
// e escrever quantas notas de cada valor serão necessárias para atender ao saque
// com a menor quantidade de notas possível. 
// Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 reais.
#include <stdio.h>

int main(){
    int saque;
    int n100, n50, n20, n10, n5, n2, n1;

    printf("Escreva o valor total do saque: R$");
    scanf("%d", &saque);

    printf("\nVocê receberá:\n");

    if(saque/100 >= 1){
        n100 = saque/100;
        printf("%d notas de 100\n", n100);
        saque = saque%100;
    }

    if(saque/50 >= 1){
        n50 = saque/50;
        printf("%d notas de 50\n", n50);
        saque = saque%50;
    }

    if(saque/20 >= 1){
        n20 = saque/20;
        printf("%d notas de 20\n", n20);
        saque = saque%20;
    }

    if(saque/10 >= 1){
        n10 = saque/10;
        printf("%d notas de 10\n", n10);
        saque = saque%10;
    }

    if(saque/5 >= 1){
        n5 = saque/5;
        printf("%d notas de 5\n", n5);
        saque = saque%5;
    }

    if(saque/2 >= 1){
        n2 = saque/2;
        printf("%d notas de 2\n", n2);
        saque = saque%2;
    }

    if(saque/1 >= 1){
        n1 = saque/1;
        printf("%d notas de 1\n", n1);
        saque = saque%1;
    }

    return 0;
}