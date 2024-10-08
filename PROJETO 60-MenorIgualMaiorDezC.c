#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que leia um número e imprima na a tela e informe se o número é menor que 10, se o número é igual ao número 10 e se o número é maior que 10. Victor
{
   int valor;
    printf("Vamos se o numero eh menor, igual ou maior que dez\n");
    printf("Digite o numero\n");
    scanf("%d", &valor);
    if (valor<10){
    printf("Menor que dez");
    }
    if (valor==10){
    printf("Igual a dez");
    }
    if (valor>10){
    printf("Maior que dez");
    }
    return (0);
}
