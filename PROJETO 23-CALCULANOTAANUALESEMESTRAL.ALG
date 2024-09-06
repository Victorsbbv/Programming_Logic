Algoritmo "CalculaNotaAnualeSemestral"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Ele calcula a média anual, a média semestral e informa o nome do aluno.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 29/02/2024
Var
// Seção de Declarações das variáveis
valor1, valor2, valor3, valor4, resultadoano, resultadotri: real
nome: caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Vamos calcular a média anual!")
escreval("Informe o seu nome")
leia(nome)
escreval("Informe o valor 1:")
leia(valor1)
escreval("Informe o valor 2:")
leia(valor2)
escreval("Informe o valor 3:")
leia(valor3)
escreval("Informe o valor 4:")
leia(valor4)
resultadoano:= (valor1+valor2+valor3+valor4)/4
resultadotri:= (valor1+valor2+valor3)/3
escreval("Aluno:", nome)
escreval("A média ANUAL é:", resultadoano)
escreval("A média SEMESTRAL é:", resultadotri)

Fimalgoritmo