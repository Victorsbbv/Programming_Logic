#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que faça a contagem regressiva de 100 até 0. Victor
{
    int valor, conta;
    conta=101;
    printf("O programa vai contar de 100 ate 0.\n");
    do{
    conta--;
    printf("%d\n", conta);
    }while (conta>0);
    return (0);
}
