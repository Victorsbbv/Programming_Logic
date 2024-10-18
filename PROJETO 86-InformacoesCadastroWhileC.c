#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que crie o cadastro de clientes de uma loja, no cadastro terá as seguintes informações. Victor
{
    int telefone, cep, cadastro;
    char nome [100];
    char endereco [100];
    char bairro [100];
    char cidade [100];
    char estado [100];

    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o seu endereco tudo junto: ");
    scanf("%s", &endereco);
    printf("Digite o seu telefone: ");
    scanf("%d", &telefone);
    printf("Digite o seu cep: ");
    scanf("%d", &cep);
    printf("Digite o seu bairro: ");
    scanf("%s", &bairro);
    printf("Digite a sua cidade: ");
    scanf("%s", &cidade);
    printf("Digite o seu estado: ");
    scanf("%s", &estado);
    printf("Digite 2 se quer fazer outro cadastro e digite 0 caso nao queira: ");
    scanf("%d", &cadastro);
    while (cadastro==2){
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("Digite o seu endereco tudo junto: ");
    scanf("%s", &endereco);
    printf("Digite o seu telefone: ");
    scanf("%d", &telefone);
    printf("Digite o seu cep: ");
    scanf("%d", &cep);
    printf("Digite o seu bairro: ");
    scanf("%s", &bairro);
    printf("Digite a sua cidade: ");
    scanf("%s", &cidade);
    printf("Digite o seu estado: ");
    scanf("%s", &estado);
    printf("Digite 2 se quer fazer outro cadastro e digite 0 caso nao queira: ");
    scanf("%d", &cadastro);
    }
    printf("FIM DO PROGRAMA!!!!!!!!!!!!!");
    return(0);
}
