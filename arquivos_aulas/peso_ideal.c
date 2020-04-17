#include <stdio.h>

int main(){
    float peso, altura;
    int sexo;

    printf("Digite o sexo: \n");
    printf("1-feminino\n");
    printf("2-Masculino\n");
    scanf("%d", &sexo);
    
    if(sexo == 1){
        printf("Digite altura\n");
        scanf("%f", &altura);
        peso = (62.1*altura)-44.7;
        printf("Peso ideal: %f\n", peso);
    }else if(sexo == 2){
        printf("Digite altura\n");
        scanf("%f", &altura);
        peso = (72.7*altura)-58;
        printf("Peso ideal: %f\n", peso);
    }else{
        printf("Sexo invalido!!!\n");
    }

    return 0;
}