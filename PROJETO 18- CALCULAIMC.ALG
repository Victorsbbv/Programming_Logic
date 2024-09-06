Algoritmo "CalculaIMC"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : ÇC
// Descrição   : O programa calcula o IMC da pessoa
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 29/02/2024
Var
// Seção de Declarações das variáveis 
peso, altura, resultado: real


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Vamos calcular seu IMC!")
escreval("Qual é o seu peso?")
leia(peso)
escreval("Qual é a sua altura?")
leia(altura)
escreval("Agora vamos fazer o cálculo! Que é Peso/Altura²")
resultado:= peso/altura^2
escreval("O seu IMC é:", resultado)
escreval("Menor que 18,5: Magreza. 18,5 a 24,9: Normal. 25 a 29,9: Sobrepeso. 30 a 34,9: Obesidade grau I. 35 a 39,9: Obesidade grau II. Maior que 40: Obesidade grau III")
Fimalgoritmo