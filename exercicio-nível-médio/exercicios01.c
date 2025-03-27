#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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
}

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


void calculo(float X, float Y, float Z, float *resultado){
    *resultado = (X*X)+Y+Z;
}
int main (){
    float A, B, C, Res;
    scanf("%f" "%f" "%f", &A, &B, &C);
    calculo(A,B,C, &Res);
    printf("%.2f", Res);
    return 0 ;
}

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

}