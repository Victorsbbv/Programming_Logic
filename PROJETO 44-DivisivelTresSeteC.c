#include <stdio.h>
#include <stdlib.h>
int main ()
// Fa�a um programa em C que leia um n�mero e informe se ele � divis�vel por 3 e por 7. Victor
{
    int valor1;
    printf("Vamos ver se o valor eh divisivel por 3 e por 7\n");
    printf("Digite o Valor\n");
    scanf("%d", &valor1);
    if (valor1 % 3 == 0 && valor1 % 7 == 0) {
    printf("Eh divisivel por 3 e 7");
    }
    else{
    printf("Nao eh divisivel por 3 e 7");
    }
    return(0);
}
