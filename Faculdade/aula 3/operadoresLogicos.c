#include <stdio.h>

int main(){
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 65){
        printf("\nVocê está apto a trabalhar!\n");
    } else {
        printf("\nVocê não está apto a trabalhar.\n");
    }

    return 0;
}