Algoritmo "ValordeCopias"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Calcula a quantidade de cópias e informa o valor total
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis
copias: inteiro
valor1: real
valor2: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("VALOR DAS CÓPIAS:")
escreval("ATÉ 100 FOLHAS: 0,25$ POR CÓPIA")
escreval("ACIMA DE 100 FOLHAS: 0,20$ POR CÓPIA")
escreval("Quantas Cópias você precisa?")
leia(copias)
se(copias<=100)então
escreva("O valor das",  copias)
escreva(" cópias são:", copias*0.25)
escreva("$")
senão(copias>100)então
escreva("O valor das",  copias)
escreva(" cópias são:", copias*0.20)
escreva("$")
fimse


Fimalgoritmo