#include <stdio.h>

int main(){
    int i, m, tam, vet[1000];
    scanf("%d", &tam);
    m = 0;

    for(i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }

    for(i=1; i<tam; i++){
        if(vet[i] < vet[m])
            m = i;
    }

    printf("Menor valor: %d\n", vet[m]);
    printf("Posicao: %d", i);
    return 0;
}