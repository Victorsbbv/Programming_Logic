#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que recebe n�meros inteiro e mostra os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro. Victor
{
    int valor, numero;
    numero=0;
    printf("Vamos mostrar os pares e �mpares em duas colunas separadas de 1 ate o valor digitado. Digite um valor\n");
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
