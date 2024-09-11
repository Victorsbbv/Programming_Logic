Algoritmo "CalculaIMCSE"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : ÇC
// Descrição   : O programa calcula o IMC da pessoa usando SE
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 06/03/2024
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
se(resultado<18.5)então
escreval("Classificação: MAGREZA")
senão
se(resultado>=18.5) e (<=24.9)então
escreval("Classificação: NORMAL, o seu IMC é:", resultado)
senão
se(resultado>=25) e (<=30)então
escreval("Classificação: SOBREPESO,o seu IMC é:", resultado)
senão
se(resultado>30)então
escreval("OBESO, o seu IMC é:", resultado)
fimse
fimse
fimse
fimse
Fimalgoritmo