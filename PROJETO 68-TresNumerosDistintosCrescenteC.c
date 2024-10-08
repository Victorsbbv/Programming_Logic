#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que permita a entrada de 3 números distintos e exiba em ordem crescente. Victor
{
    int valor1, valor2, valor3, aux;
    float media;
    printf("Vamos ver a ordem crescente de tres numeros\n");
    printf("Digite o primeiro valor\n");
    scanf("%d", &valor1);
    printf("Digite o segundo valor\n");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor\n");
    scanf("%d", &valor3);
    if (valor1> valor2){
    aux = valor1;
    valor1 = valor2;
    valor2 = aux;
    }
    if (valor1> valor3){
    aux = valor1;
    valor1 = valor3;
    valor3 = aux;
    }
   if (valor2> valor3){
    aux = valor2;
    valor2 = valor3;
    valor3 = aux;
   }
   printf("Os valores em ordem crescente sao: %d %d %d", valor1, valor2, valor3);
    return(0);
}
