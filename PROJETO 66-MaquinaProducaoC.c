#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para auxiliar na produção de uma fábrica, uma máquina precisa de manutenção sempre o que o número de peças defeituosas supera 10% da produção. Dados o total de peças produzidas e o total de peças defeituosas, informe se a máquina precisa de manutenção. Victor
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
