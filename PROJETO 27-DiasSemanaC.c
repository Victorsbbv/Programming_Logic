#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolver um programa que informe todos os dias da semana e informe na tela verticalmente. Victor
{
    char segunda [100];
    char terca [100];
    char quarta [100];
    char quinta [100];
    char sexta [100];
    char sabado [100];
    char domingo [100];
    printf("Digite o primeiro dia da semana\n");
    scanf("%s", &segunda);
     printf("Digite o segundo dia da semana\n");
    scanf("%s", &terca);
     printf("Digite o terceiro dia da semana\n");
    scanf("%s", &quarta);
     printf("Digite o quarto dia da semana\n");
    scanf("%s", &quinta);
     printf("Digite o quinto dia da semana\n");
    scanf("%s", &sexta);
     printf("Digite o sexto dia da semana\n");
    scanf("%s", &sabado);
     printf("Digite o setimo dia da semana\n");
    scanf("%s", &domingo);
    printf("Os dias da semana sao:\n");
    printf("%s\n", segunda);
    printf("%s\n", terca);
    printf("%s\n", quarta);
    printf("%s\n", quinta);
    printf("%s\n", sexta);
    printf("%s\n", sabado);
    printf("%s\n", domingo);
    return(0);
}
