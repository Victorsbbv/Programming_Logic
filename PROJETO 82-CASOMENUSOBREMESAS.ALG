Algoritmo "CasoMenuSobremesas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de sobremesas e informa caso tenha erro
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 15/03/2024
Var
// Seção de Declarações das variáveis
sobremesa: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Bem vindo ao Doces e Doces Delícia!")
escreval("Digite o número da opção que você quer escolher!")
escreval("Opção 1 - Mousse")
escreval("Opção 2 - Sorvete")
escreval("Opção 3 - MilkShake")
escreval("Opção 4 – Sunday")
leia(sobremesa)
escolha(sobremesa)
caso 1
escreval("Seu pedido: Mousse. STATUS: Está sendo preparado. Aguarde")
caso 2
escreval("Seu pedido: Sorvete. STATUS: Está sendo preparado. Aguarde")
caso 3
escreval("Seu pedido: MilkShake. STATUS: Está sendo preparado. Aguarde")
caso 4
escreval("Seu pedido: Sunday. STATUS: Está sendo preparado. Aguarde")
outrocaso
escreval("ERRO. Opção Inválida, digite um valor válido")
fimescolha
Fimalgoritmo