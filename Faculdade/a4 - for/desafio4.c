// use o laço para calcular o fatorial de um número fornecido pelo usuario
#include <stdio.h>

int main(){
    int num;
    int fatorial = 1;

    printf("Por favor insira um número: ");
    scanf("%d", &num);

    printf("%d! = ", num);
    while(num >= 1){
        
        if(num > 1){
            printf("%dx", num);
        } else{
            printf("%d", num);
        }

        fatorial = fatorial * num;
        num--;

    }
    printf(" = %d\n", fatorial);

    return 0;
}