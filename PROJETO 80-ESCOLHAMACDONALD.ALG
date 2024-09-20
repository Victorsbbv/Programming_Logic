Algoritmo "EscolhaMacDonald"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de comida
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 15/03/2024
Var
// Seção de Declarações das variáveis 
opcao: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem vindo ao MC DONALDS*TM!")
escreval("Digite o número da opção que você quer escolher!")
escreval("Opção 1 - Big Mac")
escreval("Opção 2 - Quarterão com Queijo")
escreval("Opção 3 - Hamburguer")
escreval("Opção 4 – Cheeseburger")
escreval("Opção 5 - McFritas Pequena")
escreval("Opção 6 - Chicken McNuggets")
leia(opcao)
escolha(opcao)
caso 1
escreval("Big Mac – R$ 14,50")
caso 2
escreval("Quarterão com Queijo – R$ 15,50")
caso 3
escreval("Hamburguer – R$ 10,90")
caso 4
escreval("Cheeseburger – R$ 9,90")
caso 5
escreval("McFritas Pequena – R$ 6,70")
caso 6
escreval("Chicken McNuggets – 7,80")
outrocaso
escreval("Calma lá! Não temos essa opção ainda! Opção inválida!")
fimescolha
Fimalgoritmo