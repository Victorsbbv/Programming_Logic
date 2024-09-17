Algoritmo "QuarentaCemMultiplosdeTresHorizontal"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa uma lista de 40 até 100 de valores múltiplos de 3
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
valor:=40
repita
valor:=valor+1
se(valor mod 3=0)entao
escreva(valor)
fimse
ate(valor=100)
Fimalgoritmo