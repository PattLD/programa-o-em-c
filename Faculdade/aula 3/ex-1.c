#include <stdio.h>

int main(){
    int num;

    printf("Escreva um número: \n");
    scanf("%d", &num);

    if(num == 0){
        printf("O número é ZERO!\n");
    } else if(num > 0){
        printf("O número é POSITIVO!\n");
    } else{
        printf("O número é NEGATIVO!\n");
    }

    return 0;
}