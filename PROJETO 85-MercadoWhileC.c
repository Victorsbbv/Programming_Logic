#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para um caixa de mercado que permita contabilizar 5 produtos, calcular o valor total da compra, entrar com o valor pago pelo comprador e informar o valor do troco que o comprador receberá. Victor
{
    int auxiliar, valor1, valor2, valor3, valor4, valor5, compra, troco, pagamento;
    printf("Vamos contar quanto que custa o valor de 5 produtos\n");
    printf("Digite o valor do produto 1\n");
    scanf("%d", &valor1);
    printf("Digite o valor do produto 2\n");
    scanf("%d", &valor2);
    printf("Digite o valor do produto 3\n");
    scanf("%d", &valor3);
    printf("Digite o valor do produto 4\n");
    scanf("%d", &valor4);
    printf("Digite o valor do produto 5\n");
    scanf("%d", &valor5);
    compra= valor1+valor2+valor3+valor4+valor5;
    printf("O valor total da compra eh: %d\n", compra);
    printf("Quanto voce vai pagar? ");
    scanf("%d", &pagamento);
    troco= compra-pagamento;
    if (pagamento>compra){
    troco= -(troco);
    printf("O seu troco sera: %d\n", troco);
    }
    else
    if (pagamento<compra){
    printf("O pagamento nao foi o suficiente, ainda falta: %d\n", troco);
    }
    else
    if (pagamento==compra){
    printf("O valor paga a compra perfeitamente. Sem troco. Obrigado!\n");
    }
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
    printf("Digite o valor do produto 5\n");
    scanf("%d", &valor5);
    compra= valor1+valor2+valor3+valor4+valor5;
    printf("O valor total da compra eh: %d\n", compra);
    printf("Quanto voce vai pagar? ");
    scanf("%d", &pagamento);
    troco= compra-pagamento;
    if (pagamento>compra){
    troco= -(troco);
    printf("O seu troco sera: %d\n", troco);
    }
    else
    if (pagamento<compra){
    printf("O pagamento nao foi o suficiente, ainda falta: %d\n", troco);
    }
    else
    if (pagamento==compra){
    printf("O valor paga a compra perfeitamente. Sem troco. Obrigado!\n");
    }
    printf("Voce quer ver as compras de mais 1 cliente? Digite 1 para sim e qualquer outra tecla para nao: ");
    scanf("%d", &auxiliar);
    }
    printf("FIM DO PROGRAMA!!!!!!!!!");
    return(0);
}
