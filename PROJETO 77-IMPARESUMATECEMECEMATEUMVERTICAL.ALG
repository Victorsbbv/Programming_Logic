Algoritmo "ImparesUmateCemeCemateUmVertical"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa números ímpares de 1 até 100 e de 100 até um.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 14/03/2024
Var
// Seção de Declarações das variáveis 
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("1 até 100")
para valor de 1 ate 100 faca
se (valor mod 2 <> 0)entao
escreval(valor)
fimse
fimpara
escreval("100 até 1")
para valor de 100 ate 1 passo -1 faca
se (valor mod 2 <> 0)entao
escreval(valor)
fimse
fimpara
Fimalgoritmo