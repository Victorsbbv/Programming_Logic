Algoritmo "VinteQuarentaParHorizontal"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa uma lista de 20 até 40  de números pares com o comando repita na horizontal
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis 
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
valor:=20
escreva(valor)
repita
valor:=valor+1
se(valor mod 2=0)entao
escreva(valor)
fimse
ate(valor=40)
Fimalgoritmo