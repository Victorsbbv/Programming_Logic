#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que leia dois valores inteiros distintos e informe qual é o maior. Victor
{
   int valor1, valor2;
    printf("Vamos ver qual eh maior\n");
    printf("Digite um valor\n");
    scanf("%d", &valor1);
     printf("Digite outro valor\n");
    scanf("%d", &valor2);
    if(valor1>valor2){
    printf("O primeiro valor, %d, eh maior que o segundo valor, %d", valor1, valor2);
    }
    else
    if(valor2>valor1){
    printf("O segundo valor, %d, eh maior que o primeiro valor, %d", valor2, valor1);
    }
    return (0);
}
