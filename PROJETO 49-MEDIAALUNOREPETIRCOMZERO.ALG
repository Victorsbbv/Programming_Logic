Algoritmo "MediaAlunoRepetircomZero"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Programa calcula média do aluno e repete caso tenha zero e aprova com 7
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 11/03/2024
Var
// Seção de Declarações das variáveis 
valor1, valor2, valor3: inteiro
media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
media:= (valor1+valor2+valor3)/3
escreval("Vamos calcular a média final dos 3 trimestres!")
escreval("Informe o valor 1:")
leia(valor1)
escreval("Informe o valor 2:")
leia(valor2)
escreval("Informe o valor 3:")
leia(valor3)
media:= (valor1+valor2+valor3)/3
se(media>=70)entao
escreval("APROVADO")
fimse
enquanto (media<>0)faca
escreval("Vamos calcular a média final dos 3 trimestres!")
escreval("Informe o valor 1:")
leia(valor1)
escreval("Informe o valor 2:")
leia(valor2)
escreval("Informe o valor 3:")
leia(valor3)
media:= (valor1+valor2+valor3)/3
se(media>=70)entao
escreval("APROVADO")
fimse
fimenquanto
fimalgoritmo