#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que conte de 20 até 40 e imprima na tela apenas os números pares, horizontalmente. Victor
{
    int valor, conta;
    conta=19;
    printf("O programa vai contar de 20 ate 40 de forma horizontal e apenas imprime os pares\n");
    do{
    conta++;
    if (conta % 2==0){
    printf("%d ", conta);
    }
    }while (conta<40);
    return (0);
}
