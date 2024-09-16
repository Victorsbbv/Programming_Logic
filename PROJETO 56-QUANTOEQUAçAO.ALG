Algoritmo "QuantoEquaçao"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa se você acertou ou não a equação
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis 
valor, resultado: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Quanto é 5+(5*10+(25-12)-10)/2")
leia(valor)
resultado:= 5+(5*10+(25-12)-10)/2
se(valor=resultado)entao
escreval("Isso mesmo! Você acertou!")
escreval("O resultado era:", resultado)
senao
enquanto (valor<>resultado)faca
escreval("Quanto é 5+(5*10+(25-12)-10)/2")
leia(valor)
se(valor=resultado)entao
escreval("Isso mesmo! Você acertou!")
escreval("O resultado era:", resultado)
fimse
fimenquanto
fimse
Fimalgoritmo