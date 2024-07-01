#include <stdio.h>
#include <string.h>


int main()
{
    char nome1[100], nome2[100];
    fgets(nome1, sizeof(nome1), stdin);
    scanf("%s", nome2);
    printf("%ld %ld", strlen(nome1), strlen(nome2));        
    return 0;
}