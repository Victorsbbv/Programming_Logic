#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a seguir.. Victor
{
    float farenheit, celsius;
    printf("Vamos converter um valor de Celsius para Farenheit. Digite a temperatura em Celsius\n");
    scanf("%f", &celsius);
    printf("O resultado ser:");
    farenheit = (9*celsius +160)/5;
    printf("%f", farenheit);
    return (0);
}
