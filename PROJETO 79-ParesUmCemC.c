#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C mostra todos os números pares de 1 até 100. Victor
{
    int valor;
    valor=1;
    printf("Vamos mostrar os pares entre 1 ate 100\n");
    while (valor>=1 && valor<100){
    valor++;
    if (valor % 2==0){
    printf("\n%d", valor);
    }
    }
    return(0);
}
