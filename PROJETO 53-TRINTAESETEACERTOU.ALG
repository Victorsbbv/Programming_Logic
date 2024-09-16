Algoritmo "TrintaeSeteAcertou"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa faz um jogo e detecta quando o usuário acerta.
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 12/03/2024
Var
// Seção de Declarações das variáveis 
valor: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite um número! Tenta adivinhar, é um número entre 0 e 50!")
leia(valor)
se(valor=37)entao
escreval("Acertou!")
senao
enquanto (valor<>37)faca
escreval("Digite um número! Tenta adivinhar, é um número entre 0 e 50!")
leia(valor)
se(valor=37)entao
escreval("Acertou!")
fimse
fimenquanto
fimse
Fimalgoritmo