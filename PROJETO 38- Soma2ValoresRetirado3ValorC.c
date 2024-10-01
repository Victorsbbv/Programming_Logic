#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolve um programa que permita entrar com 3 valores, fazer a soma dos 2 primeiros números e subtrair pelo terceiro, informar o resultado final.
{
    int valor1, valor2, valor3, soma, valorfinal;
    printf("Vamos somar os 2 primeiros valores e subtrair o terceiro");
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro Valor\n");
    scanf("%d", &valor3);
    printf("A adicao entre os valores digitados eh:\n");
    soma=valor1+valor2;
    valorfinal= soma-valor3;
    printf("%d\n", soma);
    printf("O valor da soma menos o terceiro valor eh:\n");
    printf("%d\n", valorfinal);
    return(0);
}
