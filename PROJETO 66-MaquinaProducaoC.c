#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para auxiliar na produ��o de uma f�brica, uma m�quina precisa de manuten��o sempre o que o n�mero de pe�as defeituosas supera 10% da produ��o. Dados o total de pe�as produzidas e o total de pe�as defeituosas, informe se a m�quina precisa de manuten��o. Victor
{
   int pecas, defeituosas, manutencao;
    printf("Vamos ver se a maquina precisa de manutencao\n");
    printf("Digite o numero de pecas\n");
    scanf("%d", &pecas);
    printf("Digite o numero de pecas defeituosas\n");
    scanf("%d", &defeituosas);
    manutencao= pecas*0.10;
    if(defeituosas>manutencao){
    printf("A maquina precisa de manutencao");
    }
    else
    printf("A maquina esta funcionando perfeitamente");
    return (0);
}
