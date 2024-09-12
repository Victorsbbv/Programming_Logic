Algoritmo "CalculaCondicaodePagamentoComJuros"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LCi
// Descrição   : O programa calcula um valor de pagamento com condições
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 07/03/2024
Var
// Seção de Declarações das variáveis 
opcao, valor, resultadodinheiro, resultadocartao, resultado2x, descontodinheiro, descontocartao, acrescimo2x: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem vindo a loja brega! Você está interessado nessa camisa! Digite o valor da camisa!")
leia(valor)
escreval("Crédito ou a vista? Digite 1 para vista, 2 para crédito e 3 para fazer em duas vezes! O desconto do Crédito é de 15%, o desconto do a vista é 10%, e o juros de fazer em 2 vezes é de 10%")
leia(opcao)
se(opcao=1)então
descontodinheiro:= valor*0.1
resultadodinheiro:= valor-descontodinheiro
escreval("O valor da camisa é:", valor)
escreval("O valor do desconto é:", descontodinheiro)
escreval("O valor final da camisa a vista é:", resultadodinheiro)
senão
se(opcao=2)então
descontocartao:= valor*0.15
resultadocartao:= valor-descontocartao
escreval("O valor da camisa é:", valor)
escreval("O valor do desconto é:", descontocartao)
escreval("O valor final da camisa no cartão é:", resultadocartao)
senão
se(opcao=3)então
acrescimo2x:= valor*0.1
resultado2x:= valor+acrescimo2x
escreval("O valor da camisa é:", valor)
escreval("O valor dos juros  é:", acrescimo2x)
escreval("O valor final da camisa em 2 vezes é:", resultado2x)
senão
escreval("ERRO: NÚMERO INVÁLIDO")
fimse
fimse
fimse
Fimalgoritmo