#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia um número real e imprima 1⁄4 deste número. Victor
{
    float valor;
    printf("Digite um numero real \n");
    scanf("%f", &valor);
    printf("Um quarto do valor ser: %f\n", valor*1/4);
    return (0);
}
