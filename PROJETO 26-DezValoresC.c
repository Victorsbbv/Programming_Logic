#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia 10 valores numéricos inteiros e faça. Victor
{
    int valor1, valor2, valor3, valor4, valor5, valor6, valor7, valor8, valor9, somaall, subtracao, somamult;
    float valor10, somadivis;
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
     printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
     printf("Digite o terceiro Valor\n");
    scanf("%d", &valor3);
     printf("Digite o quarto Valor\n");
    scanf("%d", &valor4);
     printf("Digite o quinto Valor\n");
    scanf("%d", &valor5);
     printf("Digite o sexto Valor\n");
    scanf("%d", &valor6);
     printf("Digite o setimo Valor\n");
    scanf("%d", &valor7);
     printf("Digite o oitavo Valor\n");
    scanf("%d", &valor8);
     printf("Digite o nono Valor\n");
    scanf("%d", &valor9);
     printf("Digite o decimo Valor\n");
    scanf("%f", &valor10);
    printf("A adicao entre os valores digitados\n");
    somaall= valor1+valor2+valor3+valor4+valor5+valor6+valor7+valor8+valor9+valor10;
    subtracao= valor5-valor6-valor7-valor8-valor9-valor10;
    somadivis= (valor1+valor2+valor3+valor4+valor5+valor6+valor7+valor8+valor9)/valor10;
    somamult= (valor1+valor2+valor3+valor4+valor5+valor6+valor7+valor8+valor9)*valor10;
    printf("%d\n", somaall);
    printf("Subtracao dos 5 ultimos valores digitados\n");
    printf("%d\n", subtracao);
    printf("Soma de todos os 9 primeiros valores e a divisao pelo ultimo valor de entrada\n");
    printf("%.1f\n", somadivis);
    printf("Soma de todos os 9 primeiros valores e a multiplicação pelo ultimo valor de entrada\n");
    printf("%d\n", somamult);
    return(0);
}
