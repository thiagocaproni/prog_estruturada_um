#include <stdio.h>

int main(){
	
	int anos=0;;
    float taxa, populacaoi;
	scanf("%f",&populacaoi);
	taxa=0;
	while(populacaoi<=200000){
		taxa=taxa+((populacaoi*0.03)-(populacaoi*0.01));
		populacaoi=populacaoi+taxa;
		anos++;
	}
	printf("%d",anos);

    return 0;
}