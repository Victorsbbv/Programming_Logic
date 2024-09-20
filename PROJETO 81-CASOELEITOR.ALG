Algoritmo "CasoEleitor"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa indica se o usuário vai poder votar
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 15/03/2024
Var
// Seção de Declarações das variáveis 
idade: inteiro
nome: caractere
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Olá eleitor! Vamos descobrir a sua situação eleitoral!")
escreval("Digite o seu nome!")
leia(nome)
escreval("Olá ",  nome, ", digite o número em que sua idade se enquadra:")
escreval("1: 0 à 15")
escreval("2: 16 à 17")
escreval("3: 18 à 65")
escreval("4: 66 à 99")
leia(idade)
escolha (idade)
caso 1
escreval("Não pode Votar! A idade mínima para voto é 16 anos.")
caso 2
escreval("Voto Facultativo. Entre 16 e 17 anos, o voto é facultativo")
caso 3
escreval("Voto obrigatório. Entre 18 e 65 anos, o voto é obrigatório")
caso 4
escreval("Voto Facultativo. Após 66 anos, o voto é facultativo")
outrocaso
escreval("Você é literalmente imortal (ou ainda não nasceu???). Não tem coisas melhor pra fazer do que isso não?")
fimescolha
Fimalgoritmo