#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia a base e a altura de um retângulo e imprima o perímetro 2* (base * altura).. Victor
{
    float altura, base, perimetro;
    printf("Vamos calcular o perimetro do retangulo.\n");
    printf("Digite o valor  da  base.\n");
    scanf("%f", &base);
    printf("Digite o valor  da  altura.\n");
    scanf("%f", &altura);
    perimetro= 2*(base + altura);
    printf("O valor do perimetro ser: %f\n", perimetro);
    return (0);
}
