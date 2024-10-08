#include <stdio.h>
#include <stdlib.h>
int main ()
// Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de ̃acordo com a segunda tabela). Victor
{
    int valor;
    float ajuste, ajustefinal;
    printf("Vamos ver o aumento do produto\n");
    printf("Digite o valor do produto\n");
    scanf("%d", &valor);
    if (valor<50){
    ajuste= valor*0.05;
    ajustefinal= valor+ajuste;
    printf("O produto recebeu um aumento de 5 por cento, custando %f reais.", ajustefinal);
    }
    else
    if (valor>=50 && valor<=100){
    ajuste= valor*0.10;
    ajustefinal= valor+ajuste;
    printf("O produto recebeu um aumento de 10 por cento, custando %f reais.", ajustefinal);
    }
    else
    if (valor>100){
    ajuste= valor*0.15;
    ajustefinal= valor+ajuste;
    printf("O produto recebeu um aumento de 15 por cento, custando %f reais.", ajustefinal);
    }
    return(0);
}
