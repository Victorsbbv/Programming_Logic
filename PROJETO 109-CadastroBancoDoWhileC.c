#include <stdio.h>
#include <stdlib.h>
int main ()
// O programa faz um cadastro no banco e tenta acessar a conta. Victor
{
    char nome [100];
    int valor, cpf, senha;
    printf("Vamos fazer cadastros\n");
    printf("Digite o seu nome\n");
    scanf("%s", &nome);
    printf("Digite o seu CPF\n");
    scanf("%d", &cpf);
    printf("Digite a sua senha (APENAS NUMEROS)\n");
    scanf("%d", &senha);
    printf("Digite a senha para acessar a conta!\n");
    scanf("%d", &valor);
    if (valor!=senha){
    do{
    printf("SENHA INCORRETA, DIGITE NOVAMENTE!\n");
    scanf("%d", &valor);
    }while(valor!=senha);
    }
    printf("BEM VINDO A SUA CONTA!");
    return (0);
}
