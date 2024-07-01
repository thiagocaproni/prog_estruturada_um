#include <stdio.h>

void converterDias(int totalDias, int *anos, int *meses, int *dias) {
    *anos = totalDias / 365;
    totalDias %= 365;
    *meses = totalDias / 30;
    *dias = totalDias % 30;
}

int main() {
    int totalDias, anos, meses, dias;
    
    printf("Digite o número total de dias: ");
    scanf("%d", &totalDias);
    
    converterDias(totalDias, &anos, &meses, &dias);
    
    printf("%d dias equivalem a %d anos, %d meses e %d dias.\n", totalDias, anos, meses, dias);
    
    return 0;
}