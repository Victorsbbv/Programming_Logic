#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa em C que permita entrar com o ano de nascimento da pessoa e com o ano atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento informado é válido. Victor
{
    int idade, antigo, atual;
    printf("Vamos calcular quantos anos voce tem\n");
    printf("Digite o seu ano de nascimento\n");
    scanf("%d", &antigo);
    printf("Digite o ano atual\n");
    scanf("%d", &atual);
    if (atual> 2024){
    printf("Voce nao esta no futuro!");
    }
    else
    if (antigo> 2024){
    printf("Voce nao nasceu no futuro");
    }
    else
    if (antigo<1902){
    printf("Voce nao eh mais velho que a pessoa mais velha do mundo!");
    }
    else{
    idade= atual-antigo;
    printf("Voce tem: ");
    printf("%d", idade);
    printf(" anos!");
    }
    return(0);
}
