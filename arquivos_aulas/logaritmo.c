#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    double n1, log_natural, log_base10;
    scanf("%lf", &n1);
    log_natural = log(n1);
    log_base10 = log10(n1);
    printf("Log natural é: %lf\n", log_natural);
    printf("Log base10: %lf\n", log_base10);
    return 0;
}