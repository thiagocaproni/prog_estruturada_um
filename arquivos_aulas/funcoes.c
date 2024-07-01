#include <stdio.h>
#include <math.h>

const double PI = 3.1415926;

double areaCirculo(double raio);

int main(int argc, char *argv[]){
    double a;
    a = areaCirculo(5);
    printf("%lf", a);

    return 0;
}

double areaCirculo(double raio){
    double area;
    area = PI * pow(raio, 2);
    return area;
}