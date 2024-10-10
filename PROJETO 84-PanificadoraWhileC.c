#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para uma panificadora que registre os valores das compras feita pelos clientes (4 itens), permitir ao sistema fazer a soma total dos itens escolhido pelo cliente, permitir ao sistema rodar novamente para outro cliente digitando 1 e se digitado 0 encerrar o sistema. Victor
{
    int auxiliar, valor1, valor2, valor3, valor4, compra;
    printf("Vamos contar quanto que custa o valor de 5 produtos\n");
    printf("Digite o valor do produto 1\n");
    scanf("%d", &valor1);
    printf("Digite o valor do produto 2\n");
    scanf("%d", &valor2);
    printf("Digite o valor do produto 3\n");
    scanf("%d", &valor3);
    printf("Digite o valor do produto 4\n");
    scanf("%d", &valor4);
    compra= valor1+valor2+valor3+valor4;
    printf("O valor total da compra eh: %d\n", compra);
    printf("Voce quer ver as compras de mais 1 cliente? Digite 1 para sim e qualquer outra tecla para nao: ");
    scanf("%d", &auxiliar);
    while (auxiliar==1){
    printf("Vamos contar quanto que custa o valor de 5 produtos\n");
    printf("Digite o valor do produto 1\n");
    scanf("%d", &valor1);
    printf("Digite o valor do produto 2\n");
    scanf("%d", &valor2);
    printf("Digite o valor do produto 3\n");
    scanf("%d", &valor3);
    printf("Digite o valor do produto 4\n");
    scanf("%d", &valor4);
    compra= valor1+valor2+valor3+valor4;
    printf("O valor total da compra eh: %d\n", compra);
    printf("Voce quer ver as compras de mais 1 cliente? Digite 1 para sim e qualquer outra tecla para nao: ");
    scanf("%d", &auxiliar);
    }
    printf("FIM DO PROGRAMA!!!!!!!!!");
    return(0);
}
