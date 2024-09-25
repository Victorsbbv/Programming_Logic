#include <stdio.h>
#include <stdlib.h>
int main ()
{
    // Desenvolva um programa em C que imprima o seu nome. Victor
    printf("Digite o seu nome: \n");
    char nome[100];
    scanf("%s", &nome);
    printf("O seu nome é: %s", nome);
}
