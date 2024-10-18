#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para um caixa de mercado que permita contabilizar 5 produtos, calcular o valor total da compra, entrar com o valor pago pelo comprador e informar o valor do troco que o comprador receberá. Victor
{
    int valor1, valor2, valor3, valor4, valor5, compra, conta;
    do{
    printf("Vamos calcular o valor da compra de 5 produtos\n");
    printf("Digite o primeiro produto: \n");
    scanf("%d", &valor1);
    printf("Digite o segundo produto: \n");
    scanf("%d", &valor2);
    printf("Digite o terceiro produto: \n");
    scanf("%d", &valor3);
    printf("Digite o quarto produto: \n");
    scanf("%d", &valor4);
    printf("Digite o quinto produto: \n");
    scanf("%d", &valor5);
    compra= valor1+valor2+valor3+valor4+valor5;
    printf("O valor da compra eh %d\n", compra);
    printf("Digite 1 para outro cliente e digite qualquer outra tecla para encerrar o programa: ");
    scanf("%d", &conta);
    }while (conta==1);
    printf("FIM DO PROGRAMA!!!");
    return (0);
}
