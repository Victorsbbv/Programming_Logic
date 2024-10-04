#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5. Victor
{
    int valor1, valor2, soma;
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    soma=valor1+valor2;
    if (soma>20) {
    printf("Valor maior que 20. A adicao da soma %d", soma);
    printf(" mais 8 ser:\n");
    printf("%d\n", soma+8);
    }
    else {
    printf("Valor menor que 20. A subtracao da soma %d", soma);
    printf(" menos 5 ser:\n");
    printf("%d\n", soma-5);
    }
    return(0);
}
