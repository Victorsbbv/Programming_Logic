#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia um n�mero real e calcule o quadrado deste n�mero. Ao final, o programa deve imprimir o resultado do c�lculo. Victor

{
    float valor;
    printf("Digite um numero real \n");
    scanf("%f", &valor);
    printf("Esse numero ao quadrado ser: %f\n", valor*valor);
    return (0);
}
