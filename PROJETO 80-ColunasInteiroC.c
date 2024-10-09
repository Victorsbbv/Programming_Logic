#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que recebe inteiro e mostra os números pares e ímpares (separados, em duas colunas), de 1 até esse inteiro. Victor
{
    int valor, numero;
    numero=0;
    printf("Vamos mostrar os pares entre 1 ate o valor digitado. Digite um valor\n");
    scanf("%d", &valor);
    while (numero<=valor){
    numero++;
    if (numero % 2==0){
    printf("\n %d", numero);
    }
    if (numero % 2!=0){
    printf(" %d", numero);
    }
    }
    return(0);
}
