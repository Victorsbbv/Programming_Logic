#include <stdio.h>
#include <stdlib.h>
int main ()
// A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto.
// Faça um programa em linguagem C que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido. Victor
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
