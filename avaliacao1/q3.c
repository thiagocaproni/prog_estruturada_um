#include <stdio.h>
#include <math.h>

int main(){
    float dp, raio, cx, cy, px, py;
    scanf("%f", &raio);
    scanf("%f", &cx);
    scanf("%f", &cy);
    scanf("%f", &px);
    scanf("%f", &py);

    dp = sqrt( pow(px-cx, 2) + pow(py-cy,2) );

    if(dp > raio)
        printf("Ponto P(%.2f,%.2f) externo a circunferencia.", px, py);
    else if(dp < raio)
        printf("Ponto P(%.2f,%.2f) interno a circunferencia.", px, py);
    else
        printf("Ponto P(%.2f,%.2f) pertence a circunferencia.", px, py);

    return 0;
}