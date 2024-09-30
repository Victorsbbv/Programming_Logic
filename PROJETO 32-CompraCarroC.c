#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que calcule e demonstre os valores dos impostos pagos na compra de um veículo vendido em uma concessionária de veículos. Victor
{
    int veiculo;
    float icms, ipi, cofins, pis, ipva, impostoscarro;
    printf("O veículo vale 72.000. Vamos ver quantos impostos terao quer ser pagos!\n");
    veiculo= 72000;
    printf("ICMS: Impostos de 13,3 por cento, que sao:\n");
    icms= veiculo*0.133;
    printf("%f\n", icms);
    printf("IPI: Impostos de 13 por cento, que sao:\n");
    ipi= veiculo*0.13;
    printf("%f\n", ipi);
    printf("COFINS: Impostos de 7,6 por cento, que sao:\n");
    cofins= veiculo*0.076;
    printf("%f\n", cofins);
    printf("PIS: Impostos de 1,65 por cento, que sao:\n");
    pis= veiculo*0.0165;
    printf("%f\n", pis);
    printf("IPVA: Impostos de 3,5 por cento, que sao:\n");
    ipva= veiculo*0.035;
    printf("%f\n", ipva);
    printf("O valor do carro sem os impostos, que sao:\n");
    printf("%d\n", veiculo);
    printf("O valor total do carro com os impostos eh:\n");
    impostoscarro= veiculo+icms+ipi+cofins+pis+ipva;
    printf("%f", impostoscarro);
    return (0);
}
