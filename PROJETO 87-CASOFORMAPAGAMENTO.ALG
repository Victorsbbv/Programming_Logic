Algoritmo "CasoFormaPagamento"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de forma de pagamento e informa caso tenha erro
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 17/03/2024
Var
// Seção de Declarações das variáveis
pagamento: inteiro
valor: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Quanto custa o produto?")
leia(valor)
escreval("Digite o número da opção que você quer escolher para o pagamento!")
escreval("Opção 1 - Vale Alimentação")
escreval("Opção 2 - Vale refeição")
escreval("Opção 3 - Dinheiro")
escreval("Opção 4 – Cartão Débito")
escreval("Opção 5 - Cartão Crédito")
leia(pagamento)
escolha(pagamento)
caso 1
escreval("Valor do produto: ", valor, ", Forma de pagamento: VALE ALIMENTAÇÃO")
caso 2
escreval("Valor do produto: ", valor, ", Forma de pagamento: VALE REFEIÇÃO")
caso 3
escreval("Valor do produto: ", valor, ", Forma de pagamento: DINHEIRO")
caso 4
escreval("Valor do produto: ", valor, ", Forma de pagamento: CARTÃO DE DÉBITO")
caso 5
escreval("Valor do produto: ", valor, ", Forma de pagamento: CARTÃO DE CRÉDITO")
outrocaso
escreval("ERRO. Opção Inválida, digite uma opção válida")
fimescolha
Fimalgoritmo