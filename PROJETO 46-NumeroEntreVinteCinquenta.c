#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não. Victor
{
    int valor;
    printf("Vamos ver se o numero esta entre 20 e 50\n");
    printf("Digite o valor\n");
    scanf("%d", &valor);
    if (valor>= 20 && valor<=50) {
    printf("O valor esta entre 20 e 50");
    }
    else{
    printf("O valor nao esta entre 20 e 50");
    }
    return(0);
}
