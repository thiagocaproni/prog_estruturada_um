#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
}; 

int main(){
    struct pessoa p;
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strlen(p.nome)-1] = '\0';
    scanf("%d", &p.idade);
    
    printf("Nome: %s Idade: %d", p.nome, p.idade);
    return 0;
}