#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que fa�a contagem regressiva de 50 at� 1 verticalmente. Victor
{
    int valor;
    valor=50;
    printf("Vamos contar de 50 ate 1\n");
    while (valor<=50 && valor>=1){
    printf("\n%d", valor--);
    }
    return(0);
}
