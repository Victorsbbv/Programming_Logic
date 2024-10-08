#include <stdio.h>
#include <stdlib.h>
int main ()
// Escreva um programa que, dado o valor da venda, imprima a comissão que deverão ser pagas ao vendedor. Para calcular a comissão, considere a tabela abaixo. Victor
{
    int valor;
    float comissao, comissaofinal;
    printf("Vamos ver o valor da comissao da venda\n");
    printf("Digite o valor da venda\n");
    scanf("%d", &valor);
    if (valor<20000){
    comissao= valor*0.14;
    comissaofinal= 400+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }
    else
    if (valor>=20000 && valor<40000){
    comissao= valor*0.14;
    comissaofinal= 500+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }
    else
    if (valor>=40000 && valor<60000){
    comissao= valor*0.14;
    comissaofinal= 550+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }
    else
    if (valor>=60000 && valor<80000){
    comissao= valor*0.14;
    comissaofinal= 600+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }
    else
    if (valor>=80000 && valor<100000){
    comissao= valor*0.14;
    comissaofinal= 500+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }
    else
    if (valor>=100000){
    comissao= valor*0.16;
    comissaofinal= 700+comissao;
    printf("A comissao a ser paga eh: %f", comissaofinal);
    }


    return(0);
}
