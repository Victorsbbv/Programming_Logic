#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que fa�a a contagem regressiva de 100 at� 0. Victor
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
