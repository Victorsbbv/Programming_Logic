Algoritmo "DezSessentaImparVertical"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa printa uma lista de 10 até 60  de números ímpares com o comando repita na vertical
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
valor:=10
repita
valor:=valor+1
se(valor mod 2<>0)entao
escreva(valor)
fimse
ate(valor=60)
Fimalgoritmo