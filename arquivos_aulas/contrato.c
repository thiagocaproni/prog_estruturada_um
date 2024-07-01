#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    int i, j=0;
    char str[1000], digito, str_nova[1000],*eptr;
    
    for(;;){
        scanf("%s", &digito);
        scanf("%s", str);


        if(digito != '0' && strcmp(str,"0") !=0){
            for(i=0; i<strlen(str); i++){
                if(str[i] != digito){
                    str_nova[j] = str[i];
                    j++;
                }
            }
            str_nova[j] = '\0';
            printf("%ld\n",strtol(str_nova, &eptr, 10));
            j=0;
        }else break;
    }
 
    return 0;
}