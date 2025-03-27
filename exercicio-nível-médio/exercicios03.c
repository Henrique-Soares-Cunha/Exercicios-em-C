#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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