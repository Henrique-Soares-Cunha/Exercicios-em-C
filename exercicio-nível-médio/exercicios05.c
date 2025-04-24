#include <stdio.h>
#include <stdlib.h>

/* teste de struct simples*/
struct pai{
    int idade;
    char nome[30];
};

int main(){
    struct pai p;
    scanf("%d", &p.idade);

    printf("%d", p.idade);
    return 0;
}