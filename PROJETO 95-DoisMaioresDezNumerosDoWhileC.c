#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva u programa que solicita 10 números ao usuário, através de um laço while, e ao final mostre os dois maiores números digitados pelo usuário. Victor
{
    int valor, maior, maior2, conta;
    conta=3;
    printf("Vamos ver quais sao os dois maiores numeros entre esses 10\n");
    printf("Digite o numero 1: \n");
    scanf("%d", &maior);
    printf("Digite o numero 2: \n");
    scanf("%d", &valor);
    if (maior>valor){
    maior2= valor;
    }
    else
    {
    maior2= maior;
    maior= valor;
    }
    do{
    printf("Digite o numero %d\n", conta);
    scanf("%d", &valor);
    if (valor>maior){
    maior2=maior;
    maior=valor;
    }
    else
    {
    if (valor>maior2){
    maior2=valor;
    }
    }
    conta++;
    }while (conta<=10);
    printf("\nO maior valor eh: %d", maior);
    printf("\nO segundo maior valor eh: %d\n", maior2);
    printf("FIM DO PROGRAMA!!!");
    return (0);
}
