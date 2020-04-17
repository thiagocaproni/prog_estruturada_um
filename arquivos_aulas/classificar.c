#include <stdio.h>

int main(){
    int idade;
    printf("Digite a idade:\n");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Adulto!!!\n");
    }else if(idade >= 14 && idade < 18){
        printf("Juvenil!!!\n");
    }else if(idade >= 9 && idade < 14){
        printf("Infantil!!!\n");
    }else if(idade >= 0 && idade < 9){
        printf("Mirim!!!\n");
    }else {
        printf("Valor inválido!");
    }
    
    return 0;
}