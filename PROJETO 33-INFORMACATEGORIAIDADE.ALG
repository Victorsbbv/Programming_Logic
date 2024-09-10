Algoritmo "InformaCategoriaIdade"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa qual categoria de idade se encontra a pessoa
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
idade: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Vamos te colocar na melhor categoria para a sua idade")
escreval("Qual a sua idade, nadador?")
leia(idade)
se(idade<=10)então
escreva("Você está na categoria INFANTIL: Até 10 anos! Você tem", idade)
escreva(" anos")
senão
se(idade>=11) e (idade<=17)então
escreva("Você está na categoria INFANTO-JUVENIL: De 11 à 17 anos! Você tem", idade)
escreva(" anos")
senão
se(idade>=17)então
escreva("Você está na categoria JUVENIL: Maior que 17 anos! Você tem", idade)
escreva(" anos")
fimse
fimse
fimse
Fimalgoritmo