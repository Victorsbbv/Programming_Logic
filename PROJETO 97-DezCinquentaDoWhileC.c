#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que fa�a a contagem de 10 at� 50 e imprima na tela horizontalmente. Victor
{
    int valor, conta;
    conta=9;
    printf("O programa vai contar de 10 ate 50 de forma horizontal\n");
    do{
    conta++;
    printf("%d ", conta);
    }while (conta<50);
    return (0);
}
