#include <stdio.h>
#include <stdlib.h>
int main ()
// Fa�a um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 5. Victor
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
