#include <stdio.h>
#include <string.h>


int main(){
    char msg[101];
    int i, count=0;
    fgets(msg, sizeof(msg), stdin);
    //msg[strlen(msg)-1] = '\0';
   
    for(i=0; i < strlen(msg); i++)
        if(msg[i] == '1')
            count++;

    if(count%2 == 0)
        printf("%s0",msg);
    else
        printf("%s1",msg);
    return 0;
}