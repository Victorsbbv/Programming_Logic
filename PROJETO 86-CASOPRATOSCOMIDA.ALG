Algoritmo "CasoPratosComida"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de pratos e informa caso tenha erro
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 17/03/2024
Var
// Seção de Declarações das variáveis
prato: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Bem vindo ao restaurante Espuma do Mar!")
escreval("Digite o número da opção que você quer escolher!")
escreval("Opção 1 - Bacalhau")
escreval("Opção 2 - Risoto")
escreval("Opção 3 - Peixe")
escreval("Opção 4 – Feijoada")
escreval("Opção 5 - Carne Assada")
leia(prato)
escolha(prato)
caso 1
escreval("Seu pedido: Bacalhau. Obrigado pelo pedido!")
caso 2
escreval("Seu pedido: Risoto. Obrigado pelo pedido!")
caso 3
escreval("Seu pedido: Peixe. Obrigado pelo pedido!")
caso 4
escreval("Seu pedido: Feijoada. Obrigado pelo pedido!")
caso 5
escreval("Seu pedido: Carne Assada. Obrigado pelo pedido!")
outrocaso
escreval("ERRO. Opção Inválida, digite um valor válido")
fimescolha
Fimalgoritmo