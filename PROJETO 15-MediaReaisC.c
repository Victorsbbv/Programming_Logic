#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia tr�s n�meros reais e calcule a m�dia aritm�tica destes n�meros. Ao final, o programa deve imprimir o resultado do c�lculo. Victor
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
    printf("A media dos valores �: %f\n", media);

}
