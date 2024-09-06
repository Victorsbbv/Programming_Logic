Algoritmo "ValorCalculaMercado"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : Programa faz um cálculo de itens para o mercado
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 29/02/2024
Var
// Seção de Declarações das variáveis 
item1, item2, item3, item4, item5, resultado: real
prossiga: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem vindo ao mercado Pague Barato! Vamos calcular o valor de sua compra. Pressione qualquer tecla")
leia(prossiga)
escreval("Insira o valor do primeiro item")
leia(item1)
escreval("Insira o valor do segundo item")
leia(item2)
escreval("Insira o valor do terceiro item")
leia(item3)
escreval("Insira o valor do quarto item")
leia(item4)
escreval("Insira o valor do quinto item")
leia(item5)
resultado:= item1+item2+item3+item4+item5
escreval("O resultado da compra é:", resultado)
Fimalgoritmo