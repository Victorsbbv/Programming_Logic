#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolve um programa que permita entrar com 3 valores, somar os 3 valores e informar o resultado. Victor
{
    int valor1, valor2, valor3, soma;
    printf("Vamos somar os 3 primeiros valores e somar os 3 \n");
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro Valor\n");
    scanf("%d", &valor3);
    printf("A adicao entre os valores digitados eh:\n");
    soma=valor1+valor2+valor3;
    printf("%d\n", soma);
    return(0);
}
