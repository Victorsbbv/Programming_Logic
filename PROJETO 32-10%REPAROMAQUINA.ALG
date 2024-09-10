Algoritmo "10%ReparoMaquina"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa quando a máquina precisa de manutenão
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
pecas: inteiro
pecasdefeito: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a quantidade de peças normais que a máquina produz")
leia(pecas)
escreval("Digite a quantidade de peças defeituosas que a máquina produz")
leia(pecasdefeito)
se(pecasdefeito>pecas*0.1)então
escreval("A Máquina precisa de manutenção")
senão
escreval("A Máquina não precisa de manutenção")
fimse
Fimalgoritmo