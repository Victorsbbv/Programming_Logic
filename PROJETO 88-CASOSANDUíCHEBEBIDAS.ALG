Algoritmo "CasoSanduícheBebidas"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa escolhe entre várias opções de sanduíches e bebidas e informa caso tenha erro
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 17/03/2024
Var
// Seção de Declarações das variáveis
opcao: inteiro
sanduba, bebida, soma: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
escreval("Bem vindo ao Sanduíches MACDONALDS FAKE do Seu Jorge!")
escreval("Digite o número da opção que você quer escolher!")
escreval("Opção 1 - Big Mac - R$ 26,90 / Suco de Laranja – R$ 12,30")
escreval("Opção 2 - Cheddar McMelt - R$ 26,50 / Coca Cola – R$ 7,90")
escreval("Opção 3 - Duplo Big Mac - R$ 28,90 / Suco de Laranja – R$ 12,30")
escreval("Opção 4 - Quarterão com queijo - R$ 26,50 / Coca Cola – R$ 7,90")
escreval("Opção 5 - McNífico Bacon - R$ 29,90 / Suco de Laranja – R$ 12,30")
escreval("Opção 6 - McChicken - R$ 25,90 / Coca Cola – R$ 7,90")
escreval("Opção 7 - Chicken Supreme Crispy - R$ 29,90 / Suco de Laranja – R$ 12,30")
escreval("Opção 8 - 10 Chicken McNuggets - R$ 22,50 / Coca Cola – R$ 7,90")
escreval("Opção 9 - Big Tasty Turbo Queijo - R$ 33,90 / Suco de Laranja – R$ 12,30")
escreval("Opção 10 - Big Tasty - R$ 31,90 / Coca Cola – R$ 7,90")
escreval("Opção 11 - Picanha Club House (1 carne) - R$ 34,90 / Suco de Laranja – R$ 12,30")
leia(opcao)
escolha(opcao)
caso 1
escreval("OPÇÃO 1 - Big Mac/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 2
escreval("OPÇÃO 2 - Cheddar McMelt/Coca-Cola")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 3
escreval("OPÇÃO 3 - Duplo Big Mac/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 4
escreval("OPÇÃO 4 - Quarterão com queijo/Coca-Cola")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 5
escreval("OPÇÃO 5 - McNífico Bacon/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 6
escreval("OPÇÃO 6 - McChicken/Coca-Cola")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 7
escreval("OPÇÃO 7 - Chicken Supreme Crispy/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 8
escreval("OPÇÃO 8 - 10 Chicken McNuggets/Coca-Cola")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 9
escreval("OPÇÃO 9 - Big Tasty Turbo Queijo/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 10
escreval("OPÇÃO 10 - Big Tasty/Coca-Cola")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
caso 11
escreval("OPÇÃO 11 - Picanha Club House (1 carne)/Suco de Laranja")
escreval("Digite o valor da comida:")
leia(sanduba)
escreval("Digite o valor da bebida:")
leia(bebida)
soma:= sanduba+bebida
escreval("VALOR A SER PAGO: ", soma)
outrocaso
escreval("ERRO. Opção Inválida, digite um valor válido")
fimescolha
Fimalgoritmo