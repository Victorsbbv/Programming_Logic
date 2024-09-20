Algoritmo "CasoReajusteSalário"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa um reajuste de salário conforme função
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 17/03/2024
Var
// Seção de Declarações das variáveis 
cargo, salario, ajuste, salarioajuste: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Olá, qual é o seu cargo?")
escreval("Digite 1 caso seja Supervisor, Digite 2 caso seja Técnico, e Digite 3 caso seja outro")
leia(cargo)
escolha(cargo)
caso 1
escreval("Digite o seu salário")
leia(salario)
ajuste:= salario
salario:= ajuste*0.30
salarioajuste:= salario+ajuste
escreval("O valor do salário com ajuste de Supervisor é: ", salarioajuste)
caso 2
escreval("Digite o seu salário")
leia(salario)
ajuste:= salario
salario:= ajuste*0.20
salarioajuste:= salario+ajuste
escreval("O valor do salário com ajuste de Técnico é: ", salarioajuste)
caso 3
escreval("Digite o seu salário")
leia(salario)
escreval("Seu salário não recebe ajuste, e seu salário é: ", salario)
outrocaso
escreval("ERRO. OPÇÃO INVÁLIDA")
fimescolha
Fimalgoritmo