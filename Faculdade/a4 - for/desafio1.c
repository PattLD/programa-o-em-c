//Crie três funções que imprima de 1 à 10
#include <stdio.h>

void repetirWhile(){

    int valorInicial = 1; 
    int valorMaximo = 10;

    while (valorInicial <= valorMaximo){

        printf("%d ", valorInicial);
        valorInicial++;
        
    }

    printf("(While)");
}

void repetirDoWhile(){

    int valorInicial = 0; 
    int valorMaximo = 10;

    do{
        valorInicial++;
        printf("%d ", valorInicial);

    } while (valorInicial < valorMaximo);

    printf("(Do While)");
}

void repetirFor(){
    int valorMaximo = 10;

    for(int valorInicial = 1; valorInicial <= valorMaximo; valorInicial++){
        printf("%d ", valorInicial);
    }

    printf("(For)");
}

int main(){
    repetirWhile();
    printf("\n");
    repetirDoWhile();
    printf("\n");
    repetirFor();

    return 0;
}