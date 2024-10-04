#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa que leia um número e imprima uma das mensagens: "Maior do que 20", "Igual a 20"ou "Menor do que 20". Victor
{
    int valor;
    printf("Vamos ver se o numero eh menor, igual ou maior que 20\n");
    printf("Digite o valor\n");
    scanf("%d", &valor);
    if (valor< 20) {
    printf("O valor eh menor que 20");
    }
    if (valor == 20){
    printf("O valor eh vinte");
    }
    if (valor>20){
    printf("O valor eh maior que vinte");
    }
    return(0);
}
