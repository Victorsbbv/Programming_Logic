#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que calcule o sal�rio de um funcion�rio de uma empresa que recebe um aumento de sal�rio de 25%, informar na tela o valor do sal�rio, percentual do aumento e o valor final total somado ao aumento. Victor
{
    int salario;
    float aumento, aumentofinal, reajuste;
    printf("Escreva o valor do salario\n");
    scanf("%d", &salario);
    printf("O valor do reajuste e de 25 por cento\n");
    reajuste= 0.25;
    aumento= salario * reajuste;
    aumentofinal=salario+aumento;
    printf("O valor do salario eh:%d\n", salario);
    printf("O valor do aumento de 25 eh:%1.f\n", aumento);
    printf("O valor do salario COM o reajuste eh:%1.f\n", aumentofinal);
    return (0);
}
