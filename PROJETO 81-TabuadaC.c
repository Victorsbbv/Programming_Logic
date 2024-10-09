#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10). Victor
{
    int valor, auxiliar;
    printf("Vamos mostrar a tabuada completa do valor. Digite o valor\n");
    scanf("%d", &valor);
    auxiliar=0;
    while (auxiliar<10){
    auxiliar++;
    printf("\nA tabuada de %d vezes %d eh: %d", valor, auxiliar, valor*auxiliar);
    }
    return(0);
}
