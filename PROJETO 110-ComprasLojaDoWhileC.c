#include <stdio.h>
#include <stdlib.h>
int main ()
// O programa faz a soma de 5 produtos de uma loja e informar o quanto deve ser pago. Victor
{
    int valor, produto1, produto2, produto3, produto4, produto5, compra;
    printf("Vamos fazer a soma de 5 produtos de uma loja e informar o quanto deve ser pago\n");
    do{
    printf("Digite o valor do produto 1\n");
    scanf("%d", &produto1);
    printf("Digite o valor do produto 2\n");
    scanf("%d", &produto2);
    printf("Digite o valor do produto 3\n");
    scanf("%d", &produto3);
    printf("Digite o valor do produto 4\n");
    scanf("%d", &produto4);
    printf("Digite o valor do produto 5\n");
    scanf("%d", &produto5);
    compra= produto1+produto2+produto3+produto4+produto5;
    printf("O valor total da compra eh: %d\n", compra);
    printf("Voce quer ver as compras de outro consumidor? Digite 1 para sim e qualquer outra tecla para encerrar as compras: ");
    scanf("%d", &valor);
    }while (valor==1);
    printf("FIM DO PROGRAMA E DE GASTAR!");
    return (0);
}
