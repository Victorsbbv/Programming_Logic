#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolve um programa que permita entrar com 2 valores, mostrar na tela simultaneamente os resultados. Victor
{
    int soma, subtracao, multiplicacao;
    float valor1, valor2, divisao;
    printf("Vamos fazer as operacoes entre os dois valores\n");
    printf("Digite o primeiro Valor\n");
    scanf("%f", &valor1);
    printf("Digite o segundo Valor\n");
    scanf("%f", &valor2);
    printf("A adicao entre os valores digitados eh:\n");
    soma=valor1+valor2;
    printf("%d\n", soma);
    printf("A subtracao entre os valores digitados eh:\n");
    subtracao=valor1-valor2;
    printf("%d\n", subtracao);
    printf("A multiplicacao entre os valores digitados eh:\n");
    multiplicacao=valor1*valor2;
    printf("%d\n", multiplicacao);
    printf("A divisao entre os valores digitados eh:\n");
    divisao=valor1/valor2;
    printf("%f\n", divisao);
    return(0);
}
