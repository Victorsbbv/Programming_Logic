#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que faça a contagem de 10 até 100 e imprima na tela verticalmente. Victor
{
    int valor, conta;
    conta=9;
    printf("O programa vai contar de 10 ate 100 de forma vertical\n");
    do{
    conta++;
    printf("%d\n", conta);
    }while (conta<100);
    return (0);
}
