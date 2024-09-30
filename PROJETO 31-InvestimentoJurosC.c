#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que calcule os juros da poupança de uma determinada aplicação sendo que o investidor depositou 3.500,00, calcular os rendimentos no primeiro trimestre são de 2%, no segundo trimestre é de 3,5%, informar na tela o valor total dos dois trimestres. Victor
{
    float investimento1, investimento2, investimentofinal;
    printf("O investidor investiu 3,500,00 reais. Os rendimentos do 1º Trimestre sao de 2 por cento, que sao:\n");
    investimento1= 3500*0.02;
    printf("%1.f\n", investimento1);
    printf("Ja no segundo Trimestre, o rendimento eh de 3,5 por cento, que foi:\n");
    investimento2= (3500+investimento1)*0.035;
    printf("%f\n", investimento2);
    printf("O valor total foi:\n");
    investimentofinal= 3500+investimento1+investimento2;
    printf("%f", investimentofinal);
    return (0);
}
