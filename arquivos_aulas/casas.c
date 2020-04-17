#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    float n1, n2, soma;
    scanf("%f%f", &n1,&n2);
    soma = n1 + n2;
    printf("Soma é %.2f: ", soma);
    return 0;
}