#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que efetue a apresenta��o do valor da convers�o em real (R$) de um valor lido em d�lar (US$). Para isso, ser� necess�rio tamb�m ler o valor da cota��o do d�lar. Victor
{
    float real, dolar, cotacao;
    printf("Digite a quantidade de reais\n");
    scanf("%f", &real);
    printf("Digite o valor da cotacao do dolar (exemplo, 1 real=4.98 dolares\n");
    scanf("%f", &cotacao);
    dolar=real/cotacao;
    printf("A conversao de real em dolar ser: ");
    printf("%f", dolar);
    printf(" dolares");
    return (0);
}
