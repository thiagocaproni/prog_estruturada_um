#include <stdio.h>


int main(){
    int par[5], impar[5], ip=0, ii=0, i, n;
    
    
    for(i=0; i<15; i++){
        scanf("%d", &n);
        if(n%2 == 0){
            par[ip] = n;
            ip++;
        }
        else{
            impar[ii] = n;
            ii++;
        }

        if(ip == 5){
            for(ip = 0; ip < 5; ip++)
                printf("par[%d] = %d\n", ip, par[ip]);
            ip = 0;
        }
        if(ii == 5){
            for(ii = 0; ii < 5; ii++)
                printf("impar[%d] = %d\n", ii, impar[ii]);
            ii = 0;
        }
    }

    for(i=0; i<ii; i++)
        printf("impar[%d] = %d\n", i, impar[i]);
    for(i=0; i<ip; i++)
                printf("par[%d] = %d\n", i, par[i]);

    return 0;
}