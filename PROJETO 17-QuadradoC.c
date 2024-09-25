#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o programa deve imprimir o resultado do cálculo. Victor

{
    float valor;
    printf("Digite um numero real \n");
    scanf("%f", &valor);
    printf("Esse numero ao quadrado ser: %f\n", valor*valor);
    return (0);
}
