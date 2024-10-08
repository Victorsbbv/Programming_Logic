#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa para uma papelaria com as seguintes informações. Informar que até 100 folhas a cópia custa R$ 0,25 e acima de 100 folhas a cópia custa R$ 0,20. Dado o total de cópias, informe o total a ser pago.
{
   float copias, pagar;
    printf("Até 100 folhas a cópia custa R$ 0,25 e acima de 100 folhas a cópia custa R$ 0,20.\n");
    printf("Digite quantas folhas\n");
    scanf("%f", &copias);
    if (copias<=100){
    pagar= copias*0.25;
    printf("O valor a ser pago com cada copia custando 0,25 eh: %f", pagar);
    }
    else
    if (copias>100){
    pagar= copias*0.20;
    printf("O valor a ser pago com cada copia custando 0,20 eh: %f", pagar);
    }
    return (0);
}
