#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que conte e imprima os múltiplos de 4 em até o número 500 iniciando em 0. Victor
{
    int valor, valormultiplo;
    valor=1;
    printf("Vamos mostrar os multiplos de 4 entre 0 e 500\n");
    while (valor>=0 && valor<=500){
    valor++;
    if (valor % 4==0){
    printf("\n%d", valor);
    }
    }
    return(0);
}
