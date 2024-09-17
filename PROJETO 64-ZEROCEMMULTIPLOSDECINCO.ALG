Algoritmo "ZeroCemMultiplosdeCinco"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa uma lista de 0 até 100 de valores múltiplos de 5
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
valor:=0
repita
valor:=valor+1
se(valor mod 5=0)entao
escreval(valor)
fimse
ate(valor=100)
Fimalgoritmo