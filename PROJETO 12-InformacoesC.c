#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia o nome o endereço e o telefone de um cliente e ao final, imprima esses dados. Victor
{
    char nome[100];
    char sobrenome[100];
    int numero;
    printf("Digite o seu nome:\n");
    scanf("%s", &nome);
    printf("Digite o seu sobrenome:\n");
    scanf("%s", &sobrenome);
    printf("Digite o seu telefone (tudo junto):\n");
    scanf("%d", &numero);
    printf("NOME: %s %s \n", nome, sobrenome);
    printf("TELEFONE: %d \n", numero);
    return (0);
}
