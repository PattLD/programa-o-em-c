#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    
    float altura = 0;
    float peso = 0;
    
    printf("Qual a sua altura (em metros)?\n");
    scanf("%f", &altura);

    printf("\nQual o seu peso (em kg)?\n");
    scanf("%f", &peso);
    
    float imc = peso / (altura * altura); 
    printf("\nO seu IMC eh igual a %.2f.\n", imc);

    //AND: &&
    //OR: ||

    if(imc >= 18.6 && imc <= 24.9){
        printf("Parabens! Seu IMC eh o ideal!\n");
    } else if(imc < 18.5 && imc>= 17){
        printf("Atenção... Você está abaixo do peso!\n");
    } else if(imc < 17){
        printf("Cuidado! Você está muito abaixo do peso!\n");
    } else if(imc > 24.9 && imc <= 29.9){
        printf("Atenção... Você está acima do peso!\n");
    } else if(imc > 29.9 && imc <=34.9){
        printf("Cuidado! Você está com obesidade grau I!\n");
    } else if(imc > 34.9 && imc <=40){
        printf("Cuidado! Você está com obesidade grau II!\n");
    } else{
        printf("Cuidado! Você está com obesidade grau III!\n");
    }

    return 0;
}