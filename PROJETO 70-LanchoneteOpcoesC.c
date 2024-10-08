#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo. Victor
{
    int codigo;
printf("Escolha um produto no cardapio\n");
printf("Especificacoo Codigo Preco: \n");
printf("100 Cachorro Quente R$ 1.20\n");
printf("101 Bauru Simples R$ 1.30\n");
printf("102 Bauru com Ovo R$ 1.50\n");
printf("103 Hamburguer R$ 1.20\n");
printf("104 Cheeseburguer R$ 1.70\n");
printf("105 Suco R$ 2.20\n");
printf("106 Refrigerante R$ 1.00\n");
printf("Digite o codigo do produto desejado\n");
scanf("%d", &codigo);
switch (codigo){
case 100:
printf("ESCOLHA: Cachorro Quente VALOR: R$ 1.20");
break;
case 101:
printf("ESCOLHA: Bauru Simples VALOR: R$ 1.30");
break;
case 102:
printf("ESCOLHA: Bauru com Ovo VALOR: R$ 1.50");
break;
case 103:
printf("ESCOLHA: Hamburguer VALOR: R$ 1.20");
break;
case 104:
printf("ESCOLHA: Cheeseburguer VALOR: R$ 1.70");
break;
case 105:
printf("ESCOLHA: Suco VALOR: R$ 2.20");
break;
case 106:
printf("ESCOLHA: Refrigerante VALOR: R$ 1.00");
break;
default:
printf("ERRO, CODIGO NAO EXISTE");
break;
}
return (0);
}
