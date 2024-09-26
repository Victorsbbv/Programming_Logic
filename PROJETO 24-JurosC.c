#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule o valor de uma prestação em atraso.
// Para isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso.
// Ao final, o programa deve imprimir o valor da prestação atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros simples.. Victor
{
    float valor, taxa, tempo, juros, valorfinal;
    printf("Digite o valor da prestacao\n");
    scanf("%f", &valor);
    printf("Digite o valor da taxa de prestacao (digite em valor real, ou seja, 10 por cento seria 0.10)\n");
    scanf("%f", &taxa);
    printf("Digite o valor do tempo de prestacao (meses)\n");
    scanf("%f", &tempo);
    juros = valor*taxa*tempo;
    valorfinal = valor+juros;
    printf("O valor da prestacao ser:");
    printf("%f", valor);
    printf("\n" "O periodo de atraso foi:");
    printf("%f", tempo);
    printf(" meses");
    printf("\n" "A taxa de juros ser:");
    printf("%f", taxa);
    printf("\n" "Os juros sao:");
    printf("%f", juros);
    printf("\n" "O valor final ser: %f", valorfinal);
    return (0);
}
