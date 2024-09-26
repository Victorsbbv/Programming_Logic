#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 2%. Victor
{
    int valor;
    float reajuste;
    printf("Escreva o valor da sua poupanca\n");
    scanf("%d", &valor);
    reajuste= valor * 0.02;
    reajuste=valor-reajuste;
    printf("O valor da poupanca com o valor corrigido ser: %f\n", reajuste);
    return (0);
}
