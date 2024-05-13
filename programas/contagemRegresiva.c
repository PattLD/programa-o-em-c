#include <stdio.h>

int main(){

    int  i=1;

    while(i <= 10){
        printf("%d ", i);
        i++;
    }

    printf("\n");
    i = 1;

    do{
        printf("%d ", i);
        i++;
    }while(i<=10);

    printf("\n");

    for(i=1; i<=10; i++){

        if(i == 5){
            continue;
        }

        printf("%d ", i);
	}

    printf("\n");

    for(i=1; i<=10; i++){
		printf("%d ", i);

        if(i == 5){
            break;
        }
	}

    return 0;
}