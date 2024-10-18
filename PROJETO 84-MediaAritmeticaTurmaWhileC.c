#include <stdio.h>
#include <stdlib.h>
int main ()
// Desenvolva um programa que pergunte ao usuário quantos alunos em uma sala de aula.
// Em seguida, através de um laço while, pede ao usuário para que entre com as notas de 4 bimestre de todos os alunos da sala, um por vez.
// Por fim, o programa deve mostrar a média, aritmética, da turma. Victor
{
    int valor, nota1, nota2, nota3, nota4, alunos, conta;
    float media;
    conta=0;
    printf("Quantos alunos tem na turma? Digite: ");
    scanf("%d", &alunos);
    while (conta<alunos){
    conta++;
    printf("\n Digite a nota 1 do aluno: ");
    scanf("%d", &nota1);
     printf("\n Digite a nota 2 do aluno: ");
    scanf("%d", &nota2);
     printf("\n Digite a nota 3 do aluno: ");
    scanf("%d", &nota3);
     printf("\n Digite a nota 4 do aluno: ");
    scanf("%d", &nota4);
    media= (nota1+nota2+nota3+nota4)/4;
    printf("\n");
    printf("A media eh: %f\n", media);
    }
    return(0);
}
