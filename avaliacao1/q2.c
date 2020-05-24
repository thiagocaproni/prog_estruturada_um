#include <stdio.h>
#include <math.h>

int main(){
    char tipo;
    float res, r1, r2, r3, r4;
    scanf("%c", &tipo);
    scanf("%f", &r1);
    scanf("%f", &r2);
    scanf("%f", &r3);
    scanf("%f", &r4);

    if(tipo == 'P')
        res = 1/ ( 1/r1 + 1/r2 + 1/r3 + 1/r4 );
    else if(tipo == 'S')
        res = r1+r2+r3+r4;

    printf("%.4f\n", res);

    return 0;
}