#include <stdio.h>
#include <math.h>

int main(){
    int n, n1, n2, n3;
    scanf("%d", &n);
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if( n1 > n ){
        if(n1 % 2 == 0)
            printf("%.0f\n", pow(n1,3));
        else
            printf("%.0f\n", pow(n1,2));
    }else{
        printf("%d\n", n);
    }

    if( n2 > n ){
        if(n2 % 2 == 0)
            printf("%.0f\n", pow(n2,3));
        else
            printf("%.0f\n", pow(n2,2));
    }else{
        printf("%d\n", n);
    }

    if( n3 > n ){
        if(n3 % 2 == 0)
            printf("%.0f\n", pow(n3,3));
        else
            printf("%.0f\n", pow(n3,2));
    }else{
        printf("%d\n", n);
    }

    return 0;
}