#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C mostra todos os números ímpares de 1 até 100 caso o resultado seja maior que 10, apresentá-lo. Victor
{
    int valor, valormultiplo;
    valor=1;
    printf("Vamos mostrar os impares entre 1 ate 100\n");
    while (valor>=1 && valor<100){
    valor++;
    if (valor % 2!=0){
    if (valor>10){
    printf("\n%d", valor);
    }
    }
    }
    return(0);
}
