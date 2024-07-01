#include <stdio.h>

struct aluno{
  char RA[10];
  int nota1;
  int nota2;
  int nota3;
};

int main(){
    struct aluno al[15];
    int n, i;
    float media;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", al[i].RA);
        scanf("%d", &al[i].nota1);
        scanf("%d", &al[i].nota2);
        scanf("%d", &al[i].nota3);
    }

    for(i=0; i<n; i++){
        media = (al[i].nota1 + al[i].nota2 + al[i].nota3) / 3;
        if(media >= 6)
            printf("%s\n", al[i].RA);
    }



}