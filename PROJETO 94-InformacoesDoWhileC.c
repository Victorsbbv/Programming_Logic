#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que crie o cadastro de clientes de uma loja, no cadastro terá as seguintes informações. Victor
{
    int telefone, cep, conta;
    char nome [100];
    char endereco [100];
    char bairro [100];
    char cidade [100];
    char estado [100];
    do{
    printf("Vamos fazer o seu cadastro!\n");
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    printf("Digite o seu endereco: \n");
    scanf("%s", &endereco);
    printf("Digite o seu telefone: \n");
    scanf("%d", &telefone);
    printf("Digite o seu CEP: \n");
    scanf("%d", &cep);
    printf("Digite o seu bairro: \n");
    scanf("%s", &bairro);
    printf("Digite o sua cidade: \n");
    scanf("%s", &cidade);
    printf("Digite o seu estado: \n");
    scanf("%s", &estado);
    printf("Digite 1 para outro cliente e digite qualquer outra tecla para encerrar o programa: ");
    scanf("%d", &conta);
    }while (conta==1);
    printf("FIM DO PROGRAMA!!!");
    return (0);
}
