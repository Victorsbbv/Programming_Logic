#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3". Victor
{
    int valor1;
    printf("Vamos ver se o valor eh multiplo de 3\n");
    printf("Digite o Valor\n");
    scanf("%d", &valor1);
    if (valor1 % 3 == 0) {
    printf("Eh multiplo de 3");
    }
    else{
    printf("Nao eh multiplo de 3");
    }
    return(0);
}
