#include <stdio.h>
#include <string.h>


int main(){
    char txt[500];
    fgets(txt, sizeof(txt), stdin);
    txt[strlen(txt)-1] = '\0';
    if(strlen(txt) <= 140)
        printf("TWEET");
    else   
        printf("MUTE");
    return 0;
}