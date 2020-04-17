#include <stdio.h>

int main(){
    double valor_da_conta, excedente = 0;
    int qin,qic;
    const double in = 0.04;
    const double ic = 0.09;
    const double assinatura = 17.90;

    printf("Siga as instruções para que o programa possa calcular");
    printf("\no valor de uma conta telefônica...");
    
    printf("\nDigite a quantidade de impulsos normais após ter excedido os 90:");
    scanf("%d",&qin);
    printf("\nDigite a quantidade de impulsos para celular após ter excedido os 90:");
    scanf("%d",&qic);

    if(qin > 90){
        excedente = (qin - 90) * in;
    }

    valor_da_conta = assinatura + excedente + (ic*qic);

    printf("O valor da conta e: %.2lf", valor_da_conta);
    
    return 0;
}