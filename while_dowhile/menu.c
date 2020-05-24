#include <stdio.h>

int main(){
    int op, n1, n2;

    do{
        printf("1-Soma\n");
        printf("2-Subtracao\n");
        printf("3-Sair\n");
        scanf("%d", &op);
        switch(op){
            case 1: scanf("%d%d", &n1, &n2);
                    printf("Soma: %d\n", n1+n2);
                    break;
            case 2: scanf("%d%d", &n1, &n2);
                    printf("Subtracao: %d\n", n1-n2);
                    break;
            case 3: printf("Tchau!!\n");
                    break;
            default: printf("Opcao invalida!!!\n");
        }
    }while(op!=3);
    
    return 0;
}