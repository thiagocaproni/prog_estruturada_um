#include <stdio.h>
#include <math.h>

const float PI=3.14;

int main(){
    float raio;
    float area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * pow(raio, 2);
    printf("A area do circulo eh %.2f!!!\n", area);
    return 0;
}