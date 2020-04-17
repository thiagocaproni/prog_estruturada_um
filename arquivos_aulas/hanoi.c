#include <stdio.h>

 
void torreDeHanoi(int n, char origem, char destino, char auxiliar) 
{ 
    if (n == 1) 
    {
        printf("\n Mova disco 1 da torre %c para torre %c", origem, destino); 
        return; 
    } 
    torreDeHanoi(n-1, origem, auxiliar, destino); 
    printf("\n Mova disco %d da torre %c para torre %c", n, origem, destino); 
    torreDeHanoi(n-1, auxiliar, destino, origem); 
} 
  
int main() 
{ 
    int n = 1024; 
    torreDeHanoi(n, 'A', 'C', 'B'); 
    return 0; 
} 