Algoritmo "ParouImpar"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa se o número digitado é par ou ímpar
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 07/03/2024
Var
// Seção de Declarações das variáveis
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Digite um número inteiro, e vamos te dizer se ele é ímpar ou par!")
leia(valor)
se(valor mod 2 =0)então
escreva("O número ", valor, " é par")
senão
escreval("O número ", valor, " é ímpar")
fimse

Fimalgoritmo