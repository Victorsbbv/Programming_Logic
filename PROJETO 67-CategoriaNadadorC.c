#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que informe a idade de um nadador em uma competição e informe. Victor
// Idade até 10 anos – Infantil.
// Idade de 11 a 17 anos - Categoria Infanto-Juvenil.
// Acima de 17 anos - Categoria Juvenil.
{
   int idade;
    printf("Vamos ver em qual categoria de nadador voce se encontra\n");
    printf("Digite a sua idade\n");
    scanf("%d", &idade);
    if (idade <=10){
    printf("CATEGORIAL INTANTIL");
    }
    else
    if (idade >10 && idade<=17){
    printf("CATEGORIAL INFANTO-JUVENIL");
    }
    else
    if (idade >17){
    printf("CATEGORIA JUVENIL");
    }
    return (0);
}
