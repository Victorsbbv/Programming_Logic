#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que calcule o valor de uma presta��o em atraso.
// Para isso, o programa deve ler o valor da presta��o vencida, a taxa peri�dica de juros e o per�odo de atraso.
// Ao final, o programa deve imprimir o valor da presta��o atrasada, o per�odo de atraso, os juros que ser�o cobrados pelo per�odo de atraso, o valor da presta��o acrescido dos juros. Considere juros simples.. Victor
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
