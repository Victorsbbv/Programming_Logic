#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule o reajuste do sal�rio de um funcion�rio. Para isso, o programa dever� ler o sal�rio atual do funcion�rio e ler o percentual de reajuste. Ao final imprimir o valor do novo sal�rio. Victor
{
    int valor;
    float desconto, reajuste;
    printf("Escreva o valor do produto\n");
    scanf("%d", &valor);
    printf("Escreva o valor do reajuste com numero REAL, ou seja, 10 por cento ser 0.10\n");
    scanf("%f", &reajuste);
    desconto= valor * reajuste;
    desconto=valor-desconto;
    printf("O valor do produto com %f", reajuste*100);
    printf(" de desconto ser: %f\n", desconto);
    return (0);
}
