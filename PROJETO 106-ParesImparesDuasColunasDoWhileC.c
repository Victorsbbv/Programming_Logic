#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que mostre os números pares e impares em duas colunas em uma contagem regressiva de 200 até 0. Victor
{
    int valor, conta;
    conta=200;
    printf("O programa vai contar de 200 ate 0 e vai imprimir apenas os pares e os impares em duas colunas diferentes.\n");
    do{
    conta--;
    if(conta % 2==0){
    printf("%d \n", conta);
    }
    if(conta % 2!=0){
    printf("              %d \n", conta);
    }
    }while (conta>0);
    return (0);
}
