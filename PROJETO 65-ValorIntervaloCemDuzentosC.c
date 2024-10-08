#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que receba um número, verifique se ele se encontra no intervalo entre 100 e 200. Victor
{
   int valor;
    printf("Vamos ver se o valor se encontra 100 e 200\n");
    printf("Digite um valor\n");
    scanf("%d", &valor);
    if(valor>=100 && valor<=200){
    printf("O valor se encontra o intervalo de 100 e 200");
    }
    else
    printf("O valor nao se encontra entre 100 e 200");
    return (0);
}
