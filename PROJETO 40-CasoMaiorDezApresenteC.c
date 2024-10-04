#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo. Victor
{
    int valor1, valor2, soma;
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    soma=valor1+valor2;
    if (soma>10) {
    printf("A adicao entre os valores digitados eh:\n");
    printf("%d\n", soma);
    }
    return(0);
}
