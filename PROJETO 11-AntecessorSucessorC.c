#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor. Victor
{
    int valor;
    printf("Digite um numero inteiro \n");
    scanf("%d", &valor);
    printf("VALOR SUCESSOR: %d\n", valor+1);
    printf("VALOR ANTECESSOR: %d\n", valor-1);
    return (0);
}
