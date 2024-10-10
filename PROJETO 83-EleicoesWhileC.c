#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que confirme a idade do eleitor e informe se ele está apto a votar nas próximas eleições. Victor
{
    int idade, continuar;

    printf("\nVamos ver se esta pronto para votar. Digite a sua idade: ");
    scanf("%d", &idade);
    if(idade<16){
    printf("\nImpedido de votar");
    }
    else
    if(idade>16 && idade<18){
    printf("\nVoto facultativo");
    }
    else
    if(idade>=18 && idade<65){
    printf("\nVoto obrigatorio");
    }
    else
    if(idade>=65){
    printf("\nVoto facultativo");
    }
    printf("\nDigite 1 para ver outra pessoa ou digite qualquer outra tecla para finalizar o programa: ");
    scanf("%d", &continuar);
    while (continuar==1){
     printf("\nVamos ver se esta pronto para votar. Digite a sua idade: ");
    scanf("%d", &idade);
    if(idade<16){
    printf("\nImpedido de votar");
    }
    else
    if(idade>16 && idade<18){
    printf("\nVoto facultativo");
    }
    else
    if(idade>=18 && idade<65){
    printf("\nVoto obrigatorio");
    }
    else
    if(idade>=65){
    printf("\nVoto facultativo");
    }
    printf("\nDigite 1 para ver outra pessoa ou digite qualquer outra tecla para finalizar o programa: ");
    scanf("%d", &continuar);
    }
    printf("\nFIM DO PROGRAMA!!!!!!!!!!!!!");
    return(0);
}
