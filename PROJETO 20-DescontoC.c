#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia o valor de um produto, o percentual do desconto desejado e imprima o valor do desconto e o valor do produto subtraindo o desconto. Victor
{
    int valor;
    float desconto;
    printf("Escreva o valor do produto\n");
    scanf("%d", &valor);
    desconto= valor * 0.10;
    desconto=valor-desconto;
    printf("O valor do produto com 10 de desconto ser: %f\n", desconto);
    return (0);
}
