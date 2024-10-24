#include <stdio.h>
#include <stdlib.h>
int main ()
// O programa pede para você adivinhar o resultado. Victor
{
    int valor, conta;
    conta=200;
    printf("Tente adivinhar o resultado de (11+76*2+18/2)/4.\n");
    do{
    printf("Qual o resultado?\n");
    scanf("%d", &valor);
    if(valor!=43){
    printf("Errou, tente denovo!\n");
    }
    }while (valor!=43);
    printf("Voce acertou! Parabens! Sabe a ordem das equacoes!");
    return (0);
}
