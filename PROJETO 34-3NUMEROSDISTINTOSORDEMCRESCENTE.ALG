Algoritmo "3NumerosDistintosOrdemCrescente"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa pega 3 números distintos e organiza em ordem crescente
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
valor1, valor2, valor3: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite 3 números distintos e irei organizar em ordem crescente!")
escreval("Digite o 1º número:")
leia(valor1)
escreval("Digite o 2º número:")
leia(valor2)
escreval("Digite o 3º número:")
leia(valor3)
se(valor1>=valor2) e (valor2>=valor3) e (valor1>valor3)então
escreval("A ordem é:", valor3, valor2, valor1)
senão
se(valor2>=valor1) e (valor2>=valor3) e (valor1>=valor3)então
escreval("A ordem é:", valor3, valor1, valor2)
senão
se(valor2>=valor1) e (valor2>=valor3) e (valor1<=valor3)então
escreval("A ordem é:", valor1, valor3, valor2)
senão
se(valor2>=valor1) e (valor2<=valor3)então
escreval("A ordem é:", valor1, valor2, valor3)
senão
se(valor2<=valor1) e (valor1<=valor3)então
escreval("A ordem é:", valor2, valor1, valor3)
senão
escreval(valor2,valor3,valor1)


fimse
fimse
fimse
fimse
fimse


Fimalgoritmo