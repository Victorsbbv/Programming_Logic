Algoritmo "ParouImparSoma"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa se o número digitado é par ou ímpar e soma com números especificos.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 07/03/2024
Var
// Seção de Declarações das variáveis
valor, valorpar, valorimpar: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Digite um número inteiro, e vamos te dizer se ele é ímpar ou par, somando com 5 caso seja par, e com 8 caso seja ímpar!")
leia(valor)
se(valor mod 2 =0)então
valorpar:= valor+5
valorimpar:= valor+8
escreva("O resultado é (par): ", valorpar)
senão
valorpar:= valor+5
valorimpar:= valor+8
escreval("O resultado é (ímpar):", valorimpar)
fimse
Fimalgoritmo