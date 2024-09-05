Algoritmo "ValorCalcularComVariaveis1"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa faz cálculos usando variáveis
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 28/02/2024
Var
// Seção de Declarações das variáveis 
valor1: inteiro
valor2: inteiro
valor3: inteiro,
valor4: inteiro,
resultado1: inteiro
resultado2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Calcule os valores 1450,00+3255,00+1810,00 e mostre o resultado da soma e subtraia pelo valor 2555,00.")
escreval("Digite Valor 1")
leia(valor1)
escreval("Digite Valor 2")
leia (valor2)
escreval("Digite Valor 3")
leia (valor3)
escreval("Digite Valor 4 (Subtração)")
leia(valor4)
resultado1<- valor1+valor2+valor3
escreval("O resultado dos valores 1450.00+3255.00+1810.00 é:", resultado1)
resultado2<- resultado1-valor4
escreval("O resultado da subtração do resultado com 2555,00 é:", resultado2)

Fimalgoritmo