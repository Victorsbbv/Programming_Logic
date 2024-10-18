#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que permita ao usuário entrar com as notas de 4 bimestre de todos os alunos da sala, um por vez.
// Por fim, o programa deve mostrar a média, aritmética, do aluno e utilizar o While para continuar ou encerrar o programa.Victor
{
    int valor1, valor2, valor3, valor4, media, conta;
    do{
    printf("Vamos calcular a media no aluno\n");
    printf("Digite a primeira nota: \n");
    scanf("%d", &valor1);
    printf("Digite a segunda nota: \n");
    scanf("%d", &valor2);
    printf("Digite a terceira nota: \n");
    scanf("%d", &valor3);
    printf("Digite a quarta nota: \n");
    scanf("%d", &valor4);
    media= (valor1+valor2+valor3+valor4)/4;
    printf("A media do aluno eh %d\n", media);
    printf("Digite 1 para fazer a media de outro aluno e digite qualquer outra tecla para encerrar o programa: ");
    scanf("%d", &conta);
    }while (conta==1);
    printf("FIM DO PROGRAMA!!!");
    return (0);
}
