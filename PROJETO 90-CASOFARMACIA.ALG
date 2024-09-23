Algoritmo "CasoFarmacia"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de uma farmácia e informa caso tenha erro
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 18/03/2024
Var
// Seção de Declarações das variáveis
item: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Bem vindo à Farmácia Cura Vida!")
escreval("Digite o número da opção que você quer escolher!")
escreval("Opção 1 - Dipirona")
escreval("Opção 2 - Halls Vermelho")
escreval("Opção 3 - Pastilhas Valda")
escreval("Opção 4 – Xarope da Rochelle")
escreval("Opção 5 - Paracetamol")
escreval("Opção 6 - Fralda GG")
escreval("Opção 5 - Shampoo Baby")
leia(item)
escolha(item)
caso 1
escreval("Seu pedido: Dipirona. Obrigado pelo pedido!")
caso 2
escreval("Seu pedido: Halls Vermelho. Obrigado pelo pedido!")
caso 3
escreval("Seu pedido: Pastilhas Valda. Obrigado pelo pedido!")
caso 4
escreval("Seu pedido: Xarope da Rochelle. Obrigado pelo pedido!")
caso 5
escreval("Seu pedido: Paracetamol. Obrigado pelo pedido!")
caso 6
escreval("Seu pedido: Fralda GG. Obrigado pelo pedido!")
caso 7
escreval("Seu pedido: Shampoo Baby. Obrigado pelo pedido!")
outrocaso
escreval("ERRO. Opção Inválida, digite um valor válido")
fimescolha
Fimalgoritmo