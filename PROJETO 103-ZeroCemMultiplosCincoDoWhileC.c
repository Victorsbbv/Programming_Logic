#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que mostre apenas os n�meros m�ltiplos de 5 de 0 at� 100. Victor
{
    int valor, conta;
    conta=0;
    printf("O programa vai contar de 0 ate 100 e apenas imprime os multiplos de cinco\n");
    do{
    conta++;
    if (conta % 5==0){
    printf("%d\n", conta);
    }
    }while (conta<100);
    return (0);
}
