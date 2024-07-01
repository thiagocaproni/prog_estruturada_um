#include <stdio.h>
#include <string.h>


struct aluno{
  char RA[10];
  float nota1;
  float nota2;
  float nota3;
};

int main()
{
    struct aluno al[15];
    int i, nal;
    scanf("%d", &nal);

    for(i=0; i<nal;i++){
        scanf("%s", al[i].RA);
        scanf("%f", &al[i].nota1);
        scanf("%f", &al[i].nota2);
        scanf("%f", &al[i].nota3);
    }

    for(i=0; i<nal;i++){
        if((al[i].nota1 + al[i].nota2 + al[i].nota3)/3 >= 6.0)
            printf("%s\n", al[i].RA);
    }

    return 0;
}