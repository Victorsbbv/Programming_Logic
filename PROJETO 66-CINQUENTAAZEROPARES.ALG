Algoritmo "CinquentaaZeroPares"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa uma lista de 50 até 0 de números pares com repetição
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
valor:=50
escreval(valor)
repita
valor:=valor-1
se(valor mod 2=0)entao
escreval(valor)
fimse
ate(valor=0)
Fimalgoritmo