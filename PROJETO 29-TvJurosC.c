#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que calcule o valor de uma tv que est� a venda informando seu valor � vista ou no cart�o de cr�dito com um acr�scimo de 7%, printar na tela o valor � vista em dinheiro e o percentual e o valor final quando pagos no cart�o. Victor
{
    float valor, aumento, aumentofinal, reajuste;
    printf("Qual o Valor da TV\n");
    scanf("%f", &valor);
    printf("O valor da TV no cartao tem um acrescimo de 7 por cento!\n");
    reajuste= 0.07;
    aumento= valor * reajuste;
    aumentofinal=valor+aumento;
    printf("O valor da TV eh:%1.f\n", valor);
    printf("O valor do acrescimo de 7 eh:%1.f\n", aumento);
    printf("O valor da TV com o acrescimo eh:%1.f\n", aumentofinal);
    return (0);
}
