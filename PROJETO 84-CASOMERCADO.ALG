Algoritmo "CasoMercado"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : )O programa mostra escolhas de 5 partes do mercado e informa valor e descrição do produto
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 15/03/2024
Var
// Seção de Declarações das variáveis 
padaria, bebidas, congelados, acogue, verduras: inteiro
opcao, valor: inteiro
quantidade: real
preco: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem vindo ao Mercado, qual é a seção que você quer ir? Digite os números para ir!")
//OPÇÕES
escreval("Digite 1 para a Padaria")
escreval("Digite 2 para as Bebidas")
escreval("Digite 3 para os Congelados")
escreval("Digite 4 para o Açogue")
escreval("Digite 5 para as Verduras")
leia(opcao)
escolha(opcao)
caso 1
//CASO 1: PADARIA
escreval("PADARIA: 1.Pão; 2.Bolo; 3.Pastel; 4.Baguete; 5.Pão Doce")
leia(valor)
se(valor=1)entao
escreval("Preço do Pão: 0,97 por unidade")
preco:= 0.97
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de pães de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=2)entao
escreval("Preço do Bolo: 5 reais por unidade")
preco:= 5
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de bolos de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=3)entao
escreval("Preço do Pastel: 2 por unidade")
preco:= 2
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de pasteis de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=4)entao
escreval("Preço do Baguete: 2 por unidade")
preco:= 2
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de baguetes de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=5)entao
escreval("Preço do Pão Doce: 1,50 por unidade")
preco:= 1.50
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de pães doces de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor>5)entao
escreval("ERRO, OPÇÃO INVÁLIDA")
fimse
fimse
fimse
fimse
fimse
fimse
caso 2
//CASO 2: BEBIDAS
escreval("BEBIDAS: 1.Água; 2.Coca-Cola; 3.Pepsi; 4.Fanta; 5.Cerveja")
leia(valor)
se(valor=1)entao
escreval("Preço da Água: 3 por unidade")
preco:= 3
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de água de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=2)entao
escreval("Preço da Coca-Cola: 4 reais por unidade")
preco:= 4
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Cocas-Colas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=3)entao
escreval("Preço da Pepsi: 3,50 por unidade")
preco:= 3.50
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de pepsi de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=4)entao
escreval("Preço da Fanta: 3 por unidade")
preco:= 3
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Fantas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=5)entao
escreval("Preço da Cerveja: 4,50 por unidade")
preco:= 4.50
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Cerveja de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor>5)entao
escreval("ERRO, OPÇÃO INVÁLIDA")
fimse
fimse
fimse
fimse
fimse
fimse
caso 3
//CASO 3: CONGELADOS
escreval("BEBIDAS: 1.Peixe; 2.Pizza; 3.Lasanha; 4.Nuggets; 5.Hamburguer")
leia(valor)
se(valor=1)entao
escreval("Preço do Peixe: 20 por unidade")
preco:= 20
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de peixes de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=2)entao
escreval("Preço da Pizza: 10 reais por unidade")
preco:= 10
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Pizzas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=3)entao
escreval("Preço da Lasanha: 14 por unidade")
preco:= 14
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de lasanhas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=4)entao
escreval("Preço do Nuggets: 3 por unidade")
preco:= 3
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Nuggets de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=5)entao
escreval("Preço do Hamburger: 1,50 por unidade")
preco:= 1.50
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Hamburgeres de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor>5)entao
escreval("ERRO, OPÇÃO INVÁLIDA")
fimse
fimse
fimse
fimse
fimse
fimse
caso 4
//CASO 4: Açogue
escreval("BEBIDAS: 1.Picanha; 2.Costela; 3.Carne Moída; 4.Frango; 5.Linguiça")
leia(valor)
se(valor=1)entao
escreval("Preço da Picanha: 80 por unidade")
preco:= 80
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de picanha de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=2)entao
escreval("Preço da Costela : 29 reais por unidade")
preco:= 29
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Costelas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=3)entao
escreval("Preço da Carne Moída: 14 por unidade")
preco:= 14
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de carne moída de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=4)entao
escreval("Preço do Frango: 24 por unidade")
preco:= 24
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de Frango de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=5)entao
escreval("Preço da Linguiça: 17 por unidade")
preco:= 17
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de linguiças de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor>5)entao
escreval("ERRO, OPÇÃO INVÁLIDA")
fimse
fimse
fimse
fimse
fimse
fimse
caso 5
//CASO 5: Verduras
escreval("BEBIDAS: 1.Cenoura; 2.Tomate; 3.Cebola; 4.Batata; 5.Pimentão")
leia(valor)
se(valor=1)entao
escreval("Preço da Cenoura: 1 por unidade")
preco:= 1
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de cenouras de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=2)entao
escreval("Preço do Tomate : 1,10 reais por unidade")
preco:= 1.10
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de tomates de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=3)entao
escreval("Preço da Cebola: 1,30 por unidade")
preco:= 1.30
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de cebolas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=4)entao
escreval("Preço da Batata: 0,90 por unidade")
preco:= 0.90
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de batatas de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor=5)entao
escreval("Preço do Pimentão: 2 por unidade")
preco:= 2
escreval("Qual a quantidade?")
leia(quantidade)
escreval("Você pegou a quantidade de pimentões de:", quantidade)
escreval("Você vai ter que pagar:", preco*quantidade)
senao
se(valor>5)entao
escreval("ERRO, OPÇÃO INVÁLIDA")
fimse
fimse
fimse
fimse
fimse
fimse
fimescolha
Fimalgoritmo