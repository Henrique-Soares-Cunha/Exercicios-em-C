#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



/*Elabore um programa que possua uma função que recebe
dois valores inteiros: a e b, e escreve os números pares no
intervalo de "a" a "b", inclusive ambos se estes forem pares.
A rotina deve funcionar mesmo que "a" seja maior que "b".*/
int num_par( int A, int B){
    int cont = 0;
    while (A <= B)
    {
        if (A % 2 == 1){
            A++;
        }
        cont ++;
        A += 2;
    }
    return cont;
    
}
int main (){
    int num1, num2;
    printf("Escreva um número:");
    scanf("%d", &num1);
    printf("Escreva outro número:");
    scanf("%d", &num2);
    if (num1 >= num2){
        printf("%d", num_par(num2, num1));
    }
    else{
        printf("%d", num_par(num1, num2));
    }
    return 0;
}

/*Elabore um programa que contenha uma função recebe 3 valores float (n1,
n2, n3) e retornar o (x*x)+y+z. Os valores devem ser lidos no programa
principal, o resultado também deve ser impresso no principal.
• Construa essa função de duas maneiras diferentes, respeitando os
cabeçalhos abaixo:
a. float calculo(float x,float y, float z)
b. void calculo(float x, float y, float z, float *r)*/

/*a*/
float calculo(float X, float Y, float Z){
    float resultado;
    resultado = (X*X)+Y+Z;
    return resultado;
}
int main (){
    float A, B, C;
    scanf("%f" "%f" "%f", &A, &B, &C);
    printf("%.2f", calculo(A,B,C));
    return 0 ;
}

/*b*/
void calculo(float X, float Y, float Z, float *resultado){
    *resultado = (X*X)+Y+Z;
    return;
}
int main (){
    float A, B, C, Res;
    scanf("%f" "%f" "%f", &A, &B, &C);
    calculo(A,B,C,&Res);
    printf("%.2f", Res);
    return 0 ;
}

/*Elabore um programa que leia 3 números inteiros. Este programa deverá ter
uma função que retorne o fatorial de um número. Use essa função, para
calcular o fatorial dos números lidos (imprima no programa principal).*/
int fatorial(int N){
    int i, fatorial = 1;
    for (i = 1; i <= N; i++){
        fatorial *= i;
    }
    return fatorial;
}
int main(){
    int A, B, C;
    scanf("%d" "%d" "%d", &A, &B, &C);
    printf("%d\n",fatorial(A));
    printf("%d\n",fatorial(B));
    printf("%d\n",fatorial(C));
    return 0;
}

/*Elabore um programa que:
a. Tenha um procedimento para ler 2 números
b. Faça uma função que calcule a soma do quadrado desses números, onde
o quadrado é obtido por uma função chamada quad.
*/
void chamar_num(int *A, int *B){
    printf("entre com um número");
    scanf("%d""%d", A, B);
}
int quad(int A){
    return A * A;
}
int soma_quad(int *A, int *B){
    int resultado;
    resultado = quad(*A) + quad(*B);
    return resultado;
}
int main(){
    int num1,num2;
    chamar_num(&num1, &num2);
    printf("%d", soma_quad(&num1, &num2));
    return 0 ;
}