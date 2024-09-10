Algoritmo "DoisValoresQualmaior"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa qual dois dois valores digitados é maior
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis
valor1, valor2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Vamos ver qual dos dois números é maior")
escreval("Digite um número!")
leia(valor1)
escreval("Digite um segundo número!")
leia(valor2)
se(valor1>valor2)então
escreva("O primeiro valor, no caso o valor",  valor1)
escreva(", é maior que o segundo valor, no caso o valor",  valor2)
senão
se(valor1<valor2)então
escreva("O segundo valor, no caso o valor",  valor2)
escreva(", é maior que o primeiro valor, no caso o valor",  valor1)
senão
se(valor1=valor2)então
escreva("O primeiro valor, no caso o valor",  valor1)
escreva(", é igual ao o segundo valor, no caso o valor",  valor2)
fimse
fimse
fimse
Fimalgoritmo