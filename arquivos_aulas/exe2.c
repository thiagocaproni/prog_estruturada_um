#include <stdio.h>

int main(){
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    printf("%c", str[0]);
    for(i=1; str[i] != '\0'; i++){
        if(str[i-1] == ' '){
            printf("%c", str[i]);
        }
    }
    return 0;
}
