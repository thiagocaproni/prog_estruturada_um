#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char str1[] = "Ola Mundo!";
    char str2[] = {'O','l','a',' ','M','u','n','d','o','!','\0'};
    char str3[11];
    str3[0] = 'O'; str3[1] = 'l'; str3[2] = 'a'; str3[3] = ' '; str3[4] = 'M';
    str3[5] = 'u'; str3[6] = 'n'; str3[7] = 'd'; str3[8] = 'o'; str3[9] = '!';
    str3[10] = '\0';
    char str4[11];
    strcpy(str4,"Ola Mundo!");
    char str5[11];
    //scanf("%s", str5); // sem espaco em branco
    scanf("%[^\n]s", str5); // com espaco em branco
    printf("Str1: %s tam: %ld\n", str1, strlen(str1));
    printf("Str2: %s tam: %ld\n", str2, strlen(str2));
    printf("Str3: %s tam: %ld\n", str3, strlen(str3));
    printf("Str4: %s tam: %ld\n", str4, strlen(str4));
    printf("Str5: %s tam: %ld\n", str5, strlen(str5));

    for(i=0; str1[i] != '\0'; i++){ // i < strlen(str1)
        if(str1[i] == 'a')
            str1[i] = '@';
        else if(str1[i]=='o')
            str1[i] = '#';
    }

    printf("Str1 modifcado: %s tam: %ld\n", str1, strlen(str1));
    
    return 0;
}
