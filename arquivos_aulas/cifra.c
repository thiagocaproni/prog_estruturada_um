#include <stdio.h>
#include <string.h>

int main(){
	
	char str[1000];
    int i, pos;
    fgets(str, sizeof(str), stdin);
    scanf("%d",&pos);

    for(i=0;i<strlen(str)-1;i++){
        if(str[i]+pos > 'z' && str[i] >= 'a' &&  str[i] <= 'z')
           str[i] = str[i]+pos-26;
        else if(str[i] >= 'a' &&  str[i] <= 'z')
            str[i] = str[i] + pos;
    }

    for(i=0;i<strlen(str)-1;i++)
        printf("%c", str[i]);

    return 0;
}