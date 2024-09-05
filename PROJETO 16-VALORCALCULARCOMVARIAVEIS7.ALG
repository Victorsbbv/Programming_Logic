Algoritmo "ValorCalcularComVariaveis7"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa calcula com variaveis
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 29/02/2024
Var
// Seção de Declarações das variáveis
valor1: real
valor2: real
soma: real
subtracao: real
multiplicacao: real
divisao: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Coloque dois valores, que serão adicionados, subtraidos, multiplicados e divididos.")
escreval("Digite o Valor 1:")
leia(valor1)
escreval("Digite o Valor 2:")
leia(valor2)
soma<- valor1+valor2
subtracao<- valor1-valor2
multiplicacao<- valor1*valor2
divisao<- valor1/valor2
escreval("Os resultados são:")
escreval("")
escreval("")
escreval("Adição:",soma)
escreval("Subtração:",subtracao)
escreval("Multiplicação:",multiplicacao)
escreval("Divisão:",divisao)
Fimalgoritmo