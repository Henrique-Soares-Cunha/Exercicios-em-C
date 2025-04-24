#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

/*Fazer um programa com função recursiva que
retorna todos os primos de 1 até um número
fornecido.*/
bool verificarprimo(int num, int divisor){
    if (num == divisor){
        return true;
    }
    else if (num % divisor == 0){
        return false;
    }
    return verificarprimo(num , divisor + 1);
}
void procurarprimo(int percorer){
    if (percorer == 1){
        return;
    }
    bool resultado = verificarprimo(percorer, 2);
    if (resultado == true){
        printf(" %d ,", percorer);
    }
    procurarprimo(percorer - 1);
}
int main (){
    int numero = 10;
    procurarprimo(numero);
    printf("\n");
}