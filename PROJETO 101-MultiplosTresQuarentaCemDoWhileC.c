#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que imprima na tela apenas números múltiplos de 3, entre os números 40 até 100, imprima na tela horizontalmente. Victor
{
    int valor, conta;
    conta=39;
    printf("O programa vai contar de 40 ate 100 de forma horizontal e apenas imprime os multiplos de tres\n");
    do{
    conta++;
    if (conta % 3==0){
    printf("%d ", conta);
    }
    }while (conta<100);
    return (0);
}
