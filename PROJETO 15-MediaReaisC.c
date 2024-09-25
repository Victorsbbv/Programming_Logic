#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia três números reais e calcule a média aritmética destes números. Ao final, o programa deve imprimir o resultado do cálculo. Victor
{
    float valor1, valor2, valor3;
    float media;
    printf("Vamos calcular a media de tres valores reais. \n Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor:");
    scanf("%f", &valor3);
    media = (valor1+valor2+valor3)/3;
    printf("A media dos valores é: %f\n", media);

}
