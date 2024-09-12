Algoritmo "CalculaNotaTrimestralComFormula"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Ele calcula a média final e informa a média de aproveitamento.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 08/03/2024
Var
// Seção de Declarações das variáveis
valor1, valor2, valor3, media: real
nome: caractere
aproveitamento: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Vamos calcular a média final dos 3 trimestres!")
escreval("Informe o seu nome!")
leia(nome)
escreval("Informe o valor 1:")
leia(valor1)
escreval("Informe o valor 2:")
leia(valor2)
escreval("Informe o valor 3:")
leia(valor3)
media:= (valor1+valor2+valor3)/3
aproveitamento:= (valor1+valor2*2+valor3*3+media)/7
se (aproveitamento>=90)entao
escreval("Aluno:", nome)
escreval("Notas:")
escreval("Nota 1:", valor1)
escreval("Nota 2:", valor2)
escreval("Nota 3:", valor3)
escreval("Média Trimestral:", media)
escreval("Media de Aproveitamento NOTA A, valor:", aproveitamento)
escreval("APROVADO")
senão
se (aproveitamento>=75) e (aproveitamento<90)entao
escreval("Aluno:", nome)
escreval("Notas:")
escreval("Nota 1:", valor1)
escreval("Nota 2:", valor2)
escreval("Nota 3:", valor3)
escreval("Média Trimestral:", media)
escreval("Media de Aproveitamento NOTA B, valor:", aproveitamento)
escreval("APROVADO")
senão
se (aproveitamento>=60) e (aproveitamento<75)entao
escreval("Aluno:", nome)
escreval("Notas:")
escreval("Nota 1:", valor1)
escreval("Nota 2:", valor2)
escreval("Nota 3:", valor3)
escreval("Média Trimestral:", media)
escreval("Media de Aproveitamento NOTA C, valor:", aproveitamento)
escreval("APROVADO")
senão
se (aproveitamento>=40) e (aproveitamento<60)entao
escreval("Aluno:", nome)
escreval("Notas:")
escreval("Nota 1:", valor1)
escreval("Nota 2:", valor2)
escreval("Nota 3:", valor3)
escreval("Média Trimestral:", media)
escreval("Media de Aproveitamento NOTA D, valor:", aproveitamento)
escreval("REPROVADO")
senão
se (aproveitamento<40)entao
escreval("Aluno:", nome)
escreval("Notas:")
escreval("Nota 1:", valor1)
escreval("Nota 2:", valor2)
escreval("Nota 3:", valor3)
escreval("Média Trimestral:", media)
escreval("Media de Aproveitamento NOTA E, valor:", aproveitamento)
escreval("REPROVADO")
fimse
fimse
fimse
fimse
fimse
Fimalgoritmo