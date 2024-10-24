#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que mostre os números pares em uma contagem regressiva de 50 até 0. Victor
{
    int valor, conta;
    conta=51;
    printf("O programa vai contar de 50 ate 0 e vai imprimir apenas os pares.\n");
    do{
    conta--;
    if(conta % 2==0){
    printf("%d\n", conta);
    }
    }while (conta>0);
    return (0);
}
