#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que faça a contagem de 0 até 100 e imprima na tela, na horizontal. Victor
{
    int valor, conta;
    conta=0;
    printf("O programa vai contar de 0 ate 100 de forma horizontal\n");
    do{
    conta++;
    printf("%d ", conta);
    }while (conta<100);
    return (0);
}
