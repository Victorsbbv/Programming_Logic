#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia dois n�meros reais e calcule as quatro opera��es b�sicas entre estes dois n�meros, adi��o, subtra��o, multiplica��o e divis�o. Ao final, o programa deve imprimir os resultados dos c�lculos. Victor

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
