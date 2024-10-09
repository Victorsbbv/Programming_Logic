#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que identifique números que são divisíveis por 5 e na contagem de 1 à 200, imprima na tela somente os números que não são divisíveis por 5. Victor
{
    int valor, par;
    printf("Vamos ver os valores que nao sao divisiveis por 5 entre 1 e 200. Digite um valor\n");
    par=1;
    while (par<200){
    par++;
    if (par % 5!=0){
    printf(" %d", par);
    }
    }
    return(0);
}
