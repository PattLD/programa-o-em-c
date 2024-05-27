// Ler o número de gols marcados na partida (para cada time). Escrever o nome do vencedor. 
// Caso não haja vencedor deverá ser impressa a palavra EMPATE.
#include <stdio.h>

int main(){
    int golsTime1, golsTime2;

    printf("Escreva o número de gols feitos pelo time 1: ");
    scanf("%d", &golsTime1);
    printf("Escreva o número de gols feitos pelo time 2: ");
    scanf("%d", &golsTime2);

    if(golsTime1 == golsTime2){
        printf("\nO resultado é um EMPATE\n");
    } else if(golsTime1 > golsTime2){
        printf("\nO vencedor é o TIME 1\n");
    } else{
        printf("\nO vencedor é o TIME 2\n");
    }
    
    return 0;
}