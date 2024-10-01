#include <stdio.h>
#include <stdlib.h>
int main ()
// Criar um algoritmo que some os 3 primeiros valores e subtraia o quarto valor. Victor
{
    int valor1, valor2, valor3, valor4, soma, valorfinal;
    printf("Vamos somar os 3 primeiros valores e subtrair o quarto");
    printf("Digite o primeiro Valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro Valor\n");
    scanf("%d", &valor3);
    printf("Digite o quarto Valor\n");
    scanf("%d", &valor4);
    printf("A adicao entre os valores digitados eh:\n");
    soma=valor1+valor2+valor3;
    valorfinal= soma-valor4;
    printf("%d\n", soma);
    printf("O valor da soma menos o quarto valor eh:\n");
    printf("%d\n", valorfinal);
    return(0);
}
