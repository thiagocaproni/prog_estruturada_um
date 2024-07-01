#include <stdio.h>

int main(){
	
	int n, qd=1,r;
	scanf("%d",&n);
	r=n/10;
	while(r!=0){
		qd++;
		r=r/10;
	}
	printf("%d", qd);
	return 0;
}