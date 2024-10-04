#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa em C que leia três números inteiros e imprima os três em ordem crescente. Victor
{
    int valor1, valor2, valor3;
    printf("Vamos organizar os numeros inteiros em ordem crescente\n");
    printf("Digite o primeiro valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor\n");
    scanf("%d", &valor3);
    if (valor1>valor2){
    // 1
    if (valor2>valor3)
    printf("%d %d %d", valor3, valor2, valor1);
    else
    if (valor1>valor3)
    printf("%d %d %d", valor2, valor3, valor1);
    else
    printf ("%d %d %d", valor2, valor1, valor3);
    }
    else if(valor2>valor3){
    if (valor1>valor3)
    printf("%d %d %d", valor3, valor1, valor2);
    }
    else
    printf("%d %d %d", valor1, valor2, valor3);

    return(0);
}
