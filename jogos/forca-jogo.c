#include <stdio.h>
#include <string.h>

int main(){

    char palavraSecreta[20];
    sprintf(palavraSecreta, "MELANCIA"); // adiciona a palava MELANCIA ao array
    
    int acertou = 0;
    int enforcou = 0;
    int tentativas = 0;

    do{
        char chute;
        char chutes[30];        

        printf("Qual a letra? ");
        scanf(" %c", &chute); // ESPAÇO ANTES DO C PARA IGNORAR O ENTER COMO STRING

        chutes[tentativas] = chute;
        tentativas++;

        for(int i = 0; i < (int)strlen(palavraSecreta); i++){ // strlen serve pra ver o tamanho da palavra
            
            int achou = 0;

            for(int j = 0; j < tentativas; j++){
                
                if(chutes[j] == palavraSecreta[i]){
                achou = 1;
                break;
                }   
                
            }
            
            if(achou){
                printf("%c ", palavraSecreta[i]);
            } else{
                printf("_ ");
            }

            
        }

        printf("\n");

    } while(!acertou || !enforcou);

}