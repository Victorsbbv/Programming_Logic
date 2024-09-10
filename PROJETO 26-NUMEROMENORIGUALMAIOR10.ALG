Algoritmo "NumeroMenorIgualMaior10"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa se o número digitado é menor, igual ou maior que 10
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Vamos ver se o seu número é menor, igual ou maior que 10.")
escreval("Digite um número!")
leia(valor)
//Seção que calcula se o valor é menor que 10
se(valor<10)então
escreva("O valor", valor)
escreva(" é menor que 10")
senão
//Seção que calcula se o valor é igual à 10
se(valor=10)então
escreva("O valor", valor)
escreva(" é igual a 10")
senão
se(valor>10)então
//Seção que calcula se o valor é maior que 10
escreva("O valor", valor)
escreva(" é maior que 10")
fimse
fimse
fimse
Fimalgoritmo