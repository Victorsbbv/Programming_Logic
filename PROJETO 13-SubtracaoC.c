#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia dois números inteiros e imprima a subtração deles. Victor
{
    int valor1, valor2;
    printf("Digite um numero inteiro \n");
    scanf("%d", &valor1);
    printf("Digite outro numero inteiro \n");
    scanf("%d", &valor2);
    printf("A subtracao ser: %d\n", valor1-valor2);
    return (0);
}
