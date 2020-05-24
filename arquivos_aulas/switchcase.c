#include <stdio.h>

int main(){
    char a;
    float res, x, y;
    printf("a-Soma\n");
    printf("b-Subtração\n");
    printf("c-Divisão\n");
    printf("d-Multiplicação\n");
    scanf("%c", &a);

    switch (a)
    {
        case 'a':
            printf("Digite x:\n");
            scanf("%f", &x);
            printf("Digite y:\n");
            scanf("%f", &y);
            res = x +y;
            printf("A soma eh: %f", res);
            break;
        case 'b':
            printf("Digite x:\n");
            scanf("%f", &x);
            printf("Digite y:\n");
            scanf("%f", &y);
            res = x - y;
            printf("A subtraco eh: %f", res);
            break;
        case 'c':
            printf("Digite x:\n");
            scanf("%f", &x);
            printf("Digite y:\n");
            scanf("%f", &y);
            if(y == 0)
                printf("Nao ha divisao por zero!");
            else{
                res = x / y;
                printf("A divisao eh: %f", res);
            }
            break;
        case 'd':
            printf("Digite x:\n");
            scanf("%f", &x);
            printf("Digite y:\n");
            scanf("%f", &y);
            res = x * y;
            printf("A multiplicao eh: %f", res);
            break;
        default:
            printf("Opção Inválido");
            break;
    }

    return 0;
}