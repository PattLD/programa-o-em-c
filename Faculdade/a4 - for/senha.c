#include <stdio.h>

int main(){

    int senha, login;

    printf("Escreva uma senha numérica:\n");
    scanf("%d", &senha);

    printf("faça seu login:\n");
    scanf("%d", &login);

    if(login == senha){
        printf("Senha CORRETA! :)\n");
    } else{
        while(login == senha){
            printf("Senha INCORRETA!\n\n");
            printf("faça seu login novamente:\n");
            scanf("%d", &login);
 
        }
    
    }
}