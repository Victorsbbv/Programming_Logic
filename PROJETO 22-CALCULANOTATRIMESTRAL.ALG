Algoritmo "CalculaNotaTrimestral"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Ele calcula a média final.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 29/02/2024
Var
// Seção de Declarações das variáveis
valor1, valor2, valor3, resultado: real
nome: caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Vamos calcular a média final dos 3 trimestres!")
escreval("Informe o seu nome!")
leia(nome)
escreval("Informe o valor 1:")
leia(valor1)
escreval("Informe o valor 2:")
leia(valor2)
escreval("Informe o valor 3:")
leia(valor3)
resultado:= (valor1+valor2+valor3)/3
escreval("Aluno:", nome)
escreval("A média é:", resultado)
Fimalgoritmo