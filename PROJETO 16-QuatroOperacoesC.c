#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia dois números reais e calcule as quatro operações básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao final, o programa deve imprimir os resultados dos cálculos. Victor

{
    float valor1, valor2;
    printf("Digite um numero real \n");
    scanf("%f", &valor1);
    printf("Digite outro numero real \n");
    scanf("%f", &valor2);
    printf("ADICAO: %f\n", valor1+valor2);
    printf("SUBTRACAO: %f\n", valor1-valor2);
    printf("MULTIPLACACAO: %f\n", valor1*valor2);
    printf("DIVISAO: %f\n", valor1/valor2);
    return (0);
}
