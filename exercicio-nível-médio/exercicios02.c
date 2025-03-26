#include <stdio.h>
#include <stdlib.h>
/*Henrique Soares Cunha*/
/* 
Exercicio 01
Faça um programa em C que receba um numero inteiro positivo e imprima seu fatorial.
*/
int main (){
    int val = 0, i, fatoria = 1;
    scanf("%d", &val);
    for (i = val; i > 0; i--){
        fatoria *= i;
    }
    printf("%d\n",fatoria);
    return 0;
}                                                                                                                                                                                                                                                                                       /*quehenri5090*/
/*
Exercicio02
Escreva um programa em C que o usuário deve digitar 20 números inteiros positivos, os quais são em um vetor.
Após esse preenchimento, esse vetor deverá ser separado em outros 2 vetores em que o primeiro conterá os válores 
pares e o segundo conterá os valores ímpares. ao final, imprima esses 2 valores. Pede-se que cada um desses 
2 vetores tenham o tamanho exato mecessário de armazenamento de seus números(não ter tamanhos com sobra de memória).
*/
int main (){
    int vetmãe[20], tampar = 0, tamimpar = 0, i;
    for (i = 0; i<20; i++)
    {
        scanf("%d", &vetmãe[i]);
        if (vetmãe[i] % 2 == 0)
        {
            tampar ++;
        }
        else
        {
            tamimpar ++;
        }
    }
    int vetpar[i], vetimpar[i], contpar = 0, contimpar = 0;
    for (i = 0; i<20 ; i ++)
    {
        if (vetmãe[i] % 2 == 0)
        {
            vetpar[contpar] = vetmãe[i];
            contpar ++;
        }
        else
        {
            vetimpar[contimpar] = vetmãe[i];
            contimpar ++;
        }
    }
    printf("[");
    for (i = 0; i < tampar; i ++)
    {
        printf(" %d ", vetpar[i]);
    }
    printf("]\n[");
    for (i = 0; i < tamimpar; i ++)
    {
        printf(" %d ", vetimpar[i]);
    }
    printf("]");
}