#include <stdio.h>
#include <stdlib.h>
int main ()
// A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto.
// Fa�a um programa em linguagem C que permita entrar com o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido. Victor
{
    float prestacaomaxima, prestacao, valor;
    printf("Vamos ver se voce pode receber um emprestimo\n");
    printf("Digite o seu salario bruto\n");
    scanf("%f", &valor);
    prestacaomaxima= valor*0.30;
    printf("Digite o valor da prestacao do emprestimo\n");
    scanf("%f", &prestacao);
    if (prestacao> prestacaomaxima) {
    printf("O emprestimo nao pode ser concedido");
    }
    else{
    printf("O emprestimo pode ser concedido");
    }
    return(0);
}
