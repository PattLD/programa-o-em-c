//escreva um programa que gere um número aleatório entre 1 e 100, peça para o usuário adivinhar o número. 
// o programa deve usar laço while para permitir multiplas tentativas, 
// fornecendo dicas como "muito alto" ou "Muito baixo, até que o usuario adivinhe corretamente"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int min, max, numRand, numTentativa;
    srand(time(0));

    min = 1;
    max = 100;
    numRand = min + rand() % (max - min + 1);

    printf("Gerando um número aleatório entre 1 e 100...\n...\n\n");

    printf("Qual o número?\n");
    scanf("%d", &numTentativa);
    
    while(numTentativa != numRand){
        printf("\nVocê ERROU!\n");

        if(numTentativa > numRand){
            if(numTentativa - numRand >= 10){
            printf("Valor muito alto 🢁\n\n");
            }
            if(numTentativa - numRand < 10){
            printf("Valor um pouco alto 🢁\n\n");
            }
        } 

        if(numTentativa < numRand){
            if(numRand - numTentativa >= 10){
            printf("Valor muito baixo 🢃\n\n");
            }
            if(numRand - numTentativa < 10){
            printf("Valor um pouco baixo 🢃\n\n");
            }
        } 

        printf("Qual o número?\n");
        scanf("%d", &numTentativa);
    }

    printf("\nVocê GANHOU!!\n");
    printf("O número é %d.\n", numRand);
    return 0;
}
