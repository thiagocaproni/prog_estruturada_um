#include <stdio.h>

int main(){
    char a[3] = {20,30,40};
    a[0]++;
    int i=0;
    while(i<3)
    {
        printf("%d ", a[i]);
        i++;
    }
    return 0;
}