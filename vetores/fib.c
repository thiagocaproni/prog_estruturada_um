#include <stdio.h>


int main(){
    unsigned long long vet[61];
    int i, tam, termo;

    vet[0] = 0;
    vet[1] = 1;
    for(i=2; i<61; i++){
        vet[i] = vet[i-2] + vet[i-1];
    }

    scanf("%d", &tam);

    for(i=0; i<tam; i++){
        scanf("%d", &termo);
        printf("Fib(%d) = %llu\n", termo, vet[termo]);
    }

    return 0;
}