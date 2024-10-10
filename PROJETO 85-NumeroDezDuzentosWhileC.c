#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que peça ao usuário um número entre 10 e 200.
// Se a pessoa digitar um número diferente, mostrar a mensagem "número inválido" e solicitar a digitação do número novamente.
// Se digitar correto mostrar o número digitado. Victor
{
    int valor;
    printf("Digite um valor entre 10 e 200\n");
    scanf("%d", &valor);
    if (valor>=10 && valor<=200){
    printf("O valor digitado, que eh %d, esta entre 10 e 200", valor);
    }
    else
    if (valor<10 || valor>200){
    printf("Numero invalido. Digite o numero novamente: ");
    }
    while (valor<10 || valor>200){
    scanf("%d", &valor);
    if (valor>=10 && valor<=200){
    printf("O valor digitado, que eh %d, esta entre 10 e 200", valor);
    }
    else
    if (valor<10 || valor>200){
    printf("Numero invalido. Digite o numero novamente: ");
    }
    }
    printf("\nFIM DO PROGRAMA!!!!!!!!!");
    return(0);
}
