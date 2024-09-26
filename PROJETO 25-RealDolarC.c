#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que efetue a apresentação do valor da conversão em real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar. Victor
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
