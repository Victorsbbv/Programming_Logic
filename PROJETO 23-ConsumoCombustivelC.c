#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. Victor
{
    int velocidade, tempo;
    float litros, distancia;
    printf("Vamos calcular o consumo de combustivel. Digite a velocidade do carro\n");
    scanf("%d", &velocidade);
    printf("Digite o tempo da viagem de carro\n");
    scanf("%d", &tempo);
    printf("Os litros gastos ser:");
    distancia = tempo*velocidade;
    litros = distancia/12;
    printf("%f", litros);
    printf("\n A distancia percorrida foi:");
    printf("%f", distancia);
    printf("KM");
    return (0);
}
