#include <stdio.h>

int main(){

    //FORMA 1
    int v[5];
    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %.1f\n", m);

    //FORMA 2
    int c[5] = {10, 20,  30, 40, 50};
    int i;
    float s = 0;

    for(i=0;i<5;i++){
        s += c[i];
    }

    printf("Resultado 2: %.1f\n", s/5);

    return 0;
}