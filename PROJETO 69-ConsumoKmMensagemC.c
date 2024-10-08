#include <stdio.h>
#include <stdlib.h>
int main ()
// Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo. Victor
{
    int km, litro, consumo;
    printf("Vamos ver se o carro eh economico ou nao\n");
    printf("Digite a distancia em KM do carro\n");
    scanf("%d", &km);
    printf("Digite a quantidade de litros de gasolina consumidos\n");
    scanf("%d", &litro);
    consumo= km/litro;
    printf("%d\n", consumo);
    if (consumo<8){
    printf("VENDA O CARRO IMEDIATAMENTE, BOMBA GASTADORA!\n");
    }
    else
    if (consumo>=8 && consumo<12){
    printf("Economico!\n");
    }
    else
    if (consumo>=12){
    printf("Super Economico! Mantenha esse carro!\n");
    }

    return (0);
}
