#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule a convers�o entre graus cent�grados e Fahrenheit. Para isso, leia o valor em cent�grados e calcule com base na f�rmula a seguir.. Victor
{
    float farenheit, celsius;
    printf("Vamos converter um valor de Celsius para Farenheit. Digite a temperatura em Celsius\n");
    scanf("%f", &celsius);
    printf("O resultado ser:");
    farenheit = (9*celsius +160)/5;
    printf("%f", farenheit);
    return (0);
}
