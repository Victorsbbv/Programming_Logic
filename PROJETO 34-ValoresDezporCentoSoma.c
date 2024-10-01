#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que permita a entrada de 5 valores positivos, calcular qual é o valor referente a 10% do valor total da soma, mostre o resultado da soma e o valor do percentual informado. Victor
{
    int valor1, valor2, valor3, valor4, valor5, soma;
    float somadez;
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro Valor\n");
    scanf("%d", &valor3);
    printf("Digite o quarto Valor\n");
    scanf("%d", &valor4);
    printf("Digite o quinto Valor\n");
    scanf("%d", &valor5);
    printf("A adicao entre os valores digitados eh:\n");
    soma=valor1+valor2+valor3+valor4+valor5;
    somadez= soma*0.10;
    printf("%d\n", soma);
    printf("O valor de dez por cento da soma eh:\n");
    printf("%f\n", somadez);
    return(0);
}
