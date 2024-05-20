// Leia 3 notas do aluno calcule a média e informe se o aluno foi APROVADO ou REPROVADO, considerando que a média é 6,0.
#include <stdio.h>

int main(){
    float nota1, nota2, nota3;

    printf("Escreva a nota da sua prova 1: ");
    scanf("%f", &nota1);
    printf("Escreva a nota da sua prova 2: ");
    scanf("%f", &nota2);
    printf("Escreva a nota da sua prova 3: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3)/3;
    int aprovado = (media >= 6.0);

    printf("\nSua média é igual à %.1f\n", media);

    if(aprovado == 1){
        printf("Você foi APROVADO!\n");

    } else{
        printf("Você foi REPROVADO!\n");
    }
    
    return 0;
}