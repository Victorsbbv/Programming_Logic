#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. Victor
{
    char carro [100];
    int ano;
    float litros, consumomedio;
    printf("Vamos calcular a qunatidade de litros que precisa para rodar 736KM. Informe o modelo do carro:\n");
    scanf("%s", &carro);
    printf("Digite o ano do carro\n");
    scanf("%d", &ano);
    printf("Digite o consumo medio do carro:\n");
    scanf("%f", &consumomedio);
    litros= 736/consumomedio;
    printf("Os litros gastos na viagem serao:\n");
    printf("%f\n", litros);
    printf("O carro eh:\n");
    printf("%s\n", carro);
    printf("Os ano do carro eh:\n");
    printf("%d\n", ano);
    printf("O consumo de combustivel eh:\n");
    printf("%f\n", consumomedio );
    return (0);
}
