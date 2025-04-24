#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

/*
2. Elabore um programa que possua uma função que recebe
dois valores inteiros: a e b, e escreve os números pares no
intervalo de "a" a "b", inclusive ambos se estes forem pares.
A rotina deve funcionar mesmo que "a" seja maior que "b".
• Os valores a e b devem ser lidos no programa principal.
• Ex1: a=2 e b= 7, escrever 2,4,6; Ex2: a= 10 b=5, escrever:
6,8,10.
Vetores*/


int soma = 0, num, maior = 0;
int soma_digt(int a){
    while (a > 0){
        soma += a%10;
        a = a / 10;
    }
    return soma;
}
void Maior_Digit(int a){
    while (a > 0)
    {
        int digito = a%10;

        if (maior < digito){
            maior = digito;
        }
        a = a / 10;

    }
    printf("%d\n", maior);
    
    
}
int main (){
   scanf("%d",&num);
   printf("%d\n", soma_digt(num));
   Maior_Digit(num);
}

/*3. Elabore um programa que contenha uma função recebe 3 valores float (n1,
n2, n3) e retornar o (x*x)+y+z. Os valores devem ser lidos no programa
principal, o resultado também deve ser impresso no principal.
• Construa essa função de duas maneiras diferentes, respeitando os
cabeçalhos abaixo:
a. float calculo(float x,float y, float z)
b. void calculo(float x, float y, float z, float *r)
e*/

void somadiv(int x, int*y){
    *y += x;
}
int main (){
    int num, soma = 0, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            somadiv(i, &soma);
        }
    }
    printf("%d\n", soma);
    return 0;
}

/*4. Elabore um programa que leia 3 números inteiros. Este programa deverá ter
uma função que retorne o fatorial de um número. Use essa função, para
calcular o fatorial dos números lidos (imprima no programa principal).*/

void ler_num(int *x){
    scanf("%d", x);
}
int fatorial(int N){
    int i, fatorial = 1;
    for (i = 1; i <= N; i++){
        fatorial *= i;
    }
    return fatorial;
}
void divisores(int Valor){
    int i;
    for ( i = 1; i <= Valor; i++){
        if (Valor % i == 0){
            printf(" %d ", i);
        }
    }
    
}
int main (){
    int num;
    while (true)
    {
        ler_num(&num);
        if (num<=0){
            break;
        }
        else{
            printf("%d\n", fatorial(num));
            divisores(num);
        }
    }
    
}


/*5. Elabore um programa que:
a. Tenha um procedimento para ler 2 números
b. Faça uma função que calcule a soma do quadrado desses números, ond
o quadrado é obtido por uma função chamada quad.*/
void ler_num(int *x){
    scanf("%d", x);
}
int fatorial(int N){
    int i, fatorial = 1;
    for (i = 1; i <= N; i++){
        fatorial *= i;
    }
    return fatorial;
}
void divisores(int Valor){
    int i;
    for ( i = 1; i <= Valor; i++){
        if (Valor % i == 0){
            printf(" %d ", i);
        }
    }
    
}
int main (){
    int i = 0, j = 0;
    int num[500];
    while (true)
    {
        ler_num(&num[i]);
        if (num[i]<=0){
            break;
        }
        i++;
    }
    while (num[j] >= 0)
    {
        printf("\nvalor armazenado na prosição %d, valor: %d\n", j +1, num[j]);
        printf("%d\n", fatorial(num[j]));
        divisores(num[j]);
        
        if (j == i){
            break;
        }
        j++;
    }
    
    
}