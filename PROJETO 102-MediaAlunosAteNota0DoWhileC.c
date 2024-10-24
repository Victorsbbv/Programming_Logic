#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que informe a média de alunos de uma determinada escola, eles recebem 3 notas, informar se eles estão aprovados, repita até o aluno tirar nota 0. Victor
{
    int valor, nota1, nota2, nota3, alunos, conta;
    float media;
    printf("Vamos ver qual a media do aluno.");
    do{
    printf("\n Digite a nota 1 do aluno: ");
    scanf("%d", &nota1);
    printf("\n Digite a nota 2 do aluno: ");
    scanf("%d", &nota2);
    printf("\n Digite a nota 3 do aluno: ");
    scanf("%d", &nota3);
    media= (nota1+nota2+nota3)/3;
    printf("\n");
    printf("A media eh: %f\n", media);
    if (media>=7 && media!=101){
    printf("APROVADO");
    }
    else
    if (media==101){
    printf("GOOD EVENING PASADENA!");
    }
    else
    printf("REPROVADO");
    }while (media!=0);
    return (0);
}
