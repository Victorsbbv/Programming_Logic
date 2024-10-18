#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva u programa que solicita 10 números ao usuário, através de um laço while, e ao final mostre os dois maiores números digitados pelo usuário. Victor
{
    int valor, auxiliar, auxiliar2, conta;
    conta=3;
    auxiliar=0;
    printf("Vamos ver os 2 maiores numeros entre 10\n");
    printf("\nDigite o numero 1\n");
    scanf("%d", &auxiliar);
    printf("\nDigite o numero 2\n");
    scanf("%d", &valor);
    if(auxiliar>valor){
    auxiliar2==valor;
    }
    else
    {
    auxiliar2=auxiliar;
    auxiliar=valor;
    }
    while (conta<=10){
    printf("\nDigite o numero %d\n", conta);
    scanf("%d", &valor);
    if (valor>auxiliar){
    auxiliar2=auxiliar;
    auxiliar=valor;
    }
    else
    {
    if (valor>auxiliar2){
    auxiliar2=valor;
    }
    }
    conta++;
    }
    printf("\nO maior valor eh: %d", auxiliar);
    printf("\n O segundo maior valor eh: %d", auxiliar2);
    return(0);
}
