#include <stdio.h>
#include <stdlib.h>
int main ()
// Faça um programa que leia um número e informe se ele é ou não divisível por 5. Victor
{
    int valor1;
    printf("Vamos ver se o valor eh multiplo de 5\n");
    printf("Digite o Valor\n");
    scanf("%d", &valor1);
    if (valor1 % 5 == 0) {
    printf("Eh multiplo de 5");
    }
    else{
    printf("Nao eh multiplo de 5");
    }
    return(0);
}
