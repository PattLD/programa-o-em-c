#include <stdio.h>

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int j, i;

    printf("Imprimindo a matriz:\n");

    for( j = 0; j < 3; j++){
        
        for ( i = 0; i < 3; i++){
        printf("%d ", matriz[j][i]);
        }
        
        printf("\n");
        
    }

    return 0;
}