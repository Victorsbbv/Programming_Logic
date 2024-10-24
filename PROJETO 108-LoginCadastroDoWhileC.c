#include <stdio.h>
#include <stdlib.h>
int main ()
// O programa pede o seu cadastro. Victor
{
    char nome [100];
    char endereco;
    int telefone, cep, valor;
    printf("Vamos fazer cadastros\n");
    do{
    printf("Digite o seu nome\n");
    scanf("%s", &nome);
    printf("Digite o seu telefone\n");
    scanf("%d", &telefone);
    printf("Digite o seu endereco tudo junto\n");
    scanf("%s", &endereco);
    printf("Digite o seu cep\n");
    scanf("%d", &cep);
    printf("Digite 1 para fazer outro cadastro e 2 para ir embora!\n");
    scanf("%d", &valor);
    if (valor!=1 && valor!=2){
    do{
    printf("OPCAO INVALIDA, DIGITE OUTRA!\n");
    scanf("%d", &valor);
    }while(valor!=1 && valor!=2);
    }
    }while (valor==1);
    printf("Obrigado por vir!");
    return (0);
}
