#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que recebe números inteiro e mostra os números pares e ímpares (separados, em duas colunas), de 1 até esse inteiro.Victor
{
    int valor, conta;
    conta=0;
    printf("Digite um numero inteiro que iremos informar os pares e impares em colunas separadas do numero 1 ate o numero que voce informar\n");
    printf("Digite o valor numero: ");
    scanf("%d", &valor);
    do{
    conta++;
    if (conta % 2==0){
    printf("\n%d", conta);
    }
    else
    if (conta % 2!=0){
    printf("     %d", conta);
    }
    }while (conta<valor);
    return (0);
}
