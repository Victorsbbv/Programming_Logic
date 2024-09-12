Algoritmo "DobroPositivoTriploNegativo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa encontra se o valor é positivo ou negativo e multiplica conforme.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 07/03/2024
Var
// Seção de Declarações das variáveis 
valor, resultadopos, resultadoneg: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o número, se for positivo, vamos multiplicar por 2, se for negativo, por 3!")
leia(valor)
se(valor>0)entao
resultadopos:= valor*2
escreval("O resultado é (positivo):", resultadopos)
senão
se(valor<0)entao
resultadoneg:= (valor)*3
escreval("O resultado é (negativo):", resultadoneg)
fimse
fimse
Fimalgoritmo