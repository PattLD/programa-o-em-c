#include <stdio.h>

int main(){

    float nota[4];
    int i;

    for(i=0;i<4;i++){
        printf("Insira a sua nota: \n");
        scanf("%f", &nota[i]);
    }

    printf("\nAs suas notas são: ");

    for(i=0;i<4;i++){
        printf("%.1f", nota[i]);

        if(i == 3){
            break;
        }
        printf(", ");
    }

    float soma;

    for(i=0;i<4;i++){
        soma += nota[i];
    }
    
    printf("\nA média das provas é: %.1f.\n", soma/4);

    return 0;
}