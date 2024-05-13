#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float altura = 0;
    float peso = 0;
    
    printf("Qual a sua altura (em metros)?\n");
    scanf("%f", &altura);

    printf("Qual o seu peso (em kg)?\n");
    scanf("%f", &peso);
    
    float imc = peso / (altura * altura); 
    printf("O seu IMC eh igual a %.2f.\n", imc);

    //AND: &&
    //OR: ||

    if(imc >= 18.6 && imc <= 24.9){
        printf("Parabens! Seu IMC eh o ideal!\n");
    }
    else{
        printf("Infelizmente, seu IMC nao eh o ideal.\n");
    }
}