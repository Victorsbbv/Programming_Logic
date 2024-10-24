#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que conte de 10 até 60 e imprima os números impares, verticalmente. Victor
{
    int valor, conta;
    conta=9;
    printf("O programa vai contar de 10 ate 60 de forma vertical e apenas imprime os impares\n");
    do{
    conta++;
    if (conta % 2!=0){
    printf("%d ", conta);
    }
    }while (conta<60);
    return (0);
}
