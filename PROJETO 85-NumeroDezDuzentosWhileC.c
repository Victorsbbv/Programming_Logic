#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que pe�a ao usu�rio um n�mero entre 10 e 200.
// Se a pessoa digitar um n�mero diferente, mostrar a mensagem "n�mero inv�lido" e solicitar a digita��o do n�mero novamente.
// Se digitar correto mostrar o n�mero digitado. Victor
{
    int valor;
    printf("Digite um valor entre 10 e 200\n");
    scanf("%d", &valor);
    if (valor>=10 && valor<=200){
    printf("O valor digitado, que eh %d, esta entre 10 e 200", valor);
    }
    else
    if (valor<10 || valor>200){
    printf("Numero invalido. Digite o numero novamente: ");
    }
    while (valor<10 || valor>200){
    scanf("%d", &valor);
    if (valor>=10 && valor<=200){
    printf("O valor digitado, que eh %d, esta entre 10 e 200", valor);
    }
    else
    if (valor<10 || valor>200){
    printf("Numero invalido. Digite o numero novamente: ");
    }
    }
    printf("\nFIM DO PROGRAMA!!!!!!!!!");
    return(0);
}
