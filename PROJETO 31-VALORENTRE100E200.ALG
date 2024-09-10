Algoritmo "ValorEntre100e200"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa se o valor digitado está entre os valores 100 e 200
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
numero: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite um número e vamos ver se ele se encontra no intervalo de 100 à 200!")
leia(numero)
se(numero<100)então
escreval("O valor é menor que o intevalo de 100 à 200.")
senão
se(numero>200)então
escreval("O valor é maior que o intervalo de 100 à 200.")
senão
escreval("O valor está no intevalo de 100 à 200")
fimse
fimse
Fimalgoritmo