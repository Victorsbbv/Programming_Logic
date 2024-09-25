#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que imprima a média aritmética entre os números 5, 8, 12.
{
    int valor1, valor2, valor3;
    float media;
    printf("Vamos calcular a media dos valores 5, 8 e 12. \n Digite o primeiro valor:");
    scanf("%d", &valor1);
    printf("Digite o segundo valor:");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor:");
    scanf("%d", &valor3);
    media = (valor1+valor2+valor3)/3;
    printf("A media dos valores é: %f\n", media);

}
