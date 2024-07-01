#include <stdio.h>
#include <string.h>

const int MAX=3;

struct aluno{
    char nome[100];
    float notas[4];
};

int main(){
    struct aluno a[MAX];
    int i,j;
    float s=0;

    for(i=0; i<MAX; i++){
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[ strlen(a[i].nome)-1 ] = '\0';
        for(j=0; j<4; j++)
            scanf("%f", &a[i].notas[j]);
        getchar();
    }

    for(i=0; i<MAX; i++){
        s=0;
        for(j=0; j<4; j++)
            s = s + a[i].notas[j];
        printf("Aluno: %s Nota: %f\n", a[i].nome, s);
    }

    return 0;
}