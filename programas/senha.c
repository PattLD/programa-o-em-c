#include <stdio.h>

int main(){

    int senha, login;

    printf("Escreva uma senha de 8 dígitos:\n");
    scanf("%8d", &senha);
    fflush(stdin);

    printf("faça seu login:\n");
    scanf("%8d", &login);
    fflush(stdin);

    while(login != senha){
    printf("\nSENHA INCORRETA!\n\n");
    printf("faça seu login novamente:\n");

    scanf("%d", &login);
    fflush(stdin);

    }

    if(login == senha){

        printf("\nSenha correta! :)\n\n");

    }
    return 0;
}