Algoritmo "CasoAuxílioMensal"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa qual categoria de auxílio a funcionária deve estar
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 15/03/2024
Var
// Seção de Declarações das variáveis 
condicao, salario, auxilio, salarioauxilio: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Olá, em qual categoria você se encontra?")
escreval("Digite 1 caso seja casada e não tenha filhos, Digite 2 caso tenha filhos, casada ou solteira, e Digite 3 caso seja solteira")
leia(condicao)
escolha(condicao)
caso 1
escreval("Digite o seu salário")
leia(salario)
auxilio:= salario
salario:= auxilio*0.15
salarioauxilio:= salario+auxilio
escreval("O valor do salário com auxílio é: ", salario)
caso 2
escreval("Digite o seu salário")
leia(salario)
auxilio:= salario
salario:= auxilio*0.35
salarioauxilio:= salario+auxilio
escreval("O valor do salário com auxílio é: ", salario)
caso 3
escreval("Digite o seu salário")
leia(salario)
escreval("O seu salário não recebe auxílio, e seu salário é: ", salario)
outrocaso
escreval("ERRO. Digite uma opção válida")
fimescolha
Fimalgoritmo