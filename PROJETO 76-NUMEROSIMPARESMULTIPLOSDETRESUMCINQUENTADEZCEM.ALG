Algoritmo "NumerosImparesMultiplosdeTresUmCinquentaDezCem"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa mostra a soma de todos os números ímpares que são múltiplos de três e que se encontram no conjunto dos números de 1 até 50 e de 10 até 200.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 13/03/2024
Var
// Seção de Declarações das variáveis 
soma1, soma2, valor1, valor2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
soma1:=0
soma2:=0
para valor1 de 10 ate 50 faca
se(valor1 mod 3= 0) e (valor1 mod 2<> 0)entao
soma1:= soma1+valor1
escreval("Ímpares Múltiplos de 3 entre 10 e 50:")
escreval(valor1)
fimse
fimpara
escreval("Valor da soma:", soma1)
escreval("__________________________________________________________")
para valor2 de 10 ate 200 faca
se(valor2 mod 3= 0) e (valor2 mod 2<> 0)entao
soma2:= soma2+valor2
escreval("Ímpares Múltiplos de 3 entre 10 e 200:")
escreval(valor2)
fimse
fimpara
escreval("Valor da soma:", soma2)
Fimalgoritmo