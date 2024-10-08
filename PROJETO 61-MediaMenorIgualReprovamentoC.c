#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que leia 3 notas de um determinado aluno e mostre na tela o seguinte. Victor
// Se a média for menor que 4 (Aluno Reprovado)
// Se a média for maior ou igual a 4 e menor que 7 (Aluno ficou em Recuperação)
// Se a média for maior ou igual a 7 (Aluno Aprovado)
{
   int valor1, valor2, valor3;
   float media;
    printf("Vamos calcular sua media e dizer se esta em recuperacao, aprovado ou reprovado\n");
    printf("Digite a primeira nota\n");
    scanf("%d", &valor1);
    printf("Digite a segunda nota\n");
    scanf("%d", &valor2);
    printf("Digite a terceira nota\n");
    scanf("%d", &valor3);
    media= (valor1+valor2+valor3)/3;
    printf("Media eh: %f\n", media);
    if (media<4){
    printf("Reprovado");
    }
    else
    if (media>=4 && media<7){
    printf("Recuperacao");
    }
    else
    if (media>=7){
    printf("Aprovado");
    }
    return (0);
}
