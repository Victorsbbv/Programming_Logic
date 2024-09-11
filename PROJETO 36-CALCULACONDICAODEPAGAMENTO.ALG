Algoritmo "CalculaCondicaodePagamento"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LCi
// Descrição   : O programa calcula um valor de pagamento com condições
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 06/03/2024
Var
// Seção de Declarações das variáveis 
opcao, valor, resultadovista, resultadocredito, descontovista,acrescimocredito: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem vindo a loja brega! Você está interessado nessa camisa! Digite o valor da camisa!")
leia(valor)
escreval("Crédito ou a vista? Digite 1 para vista e 2 para crédito! O acréscimo do Crédito é de 15%, e o desconto do a vista é 10%")
leia(opcao)
se(opcao=1)então
descontovista:= valor*0.1
resultadovista:= valor-descontovista
escreval("O valor da camisa é:", valor)
escreval("O valor do desconto é:", descontovista)
escreval("O valor final da camisa a vista é:", resultadovista)
senão
se(opcao=2)então
acrescimocredito:= valor*0.15
resultadocredito:= valor+acrescimocredito
escreval("O valor da camisa é:", valor)
escreval("O valor do acréscimo é:", acrescimocredito)
escreval("O valor final da camisa no cartão é:", resultadocredito)
senão
escreval("ERRO: NÚMERO INVÁLIDO")
fimse
fimse
Fimalgoritmo