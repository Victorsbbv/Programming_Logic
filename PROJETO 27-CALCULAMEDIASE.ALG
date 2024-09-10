Algoritmo "CalculaMediaSe"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O Programa calcula a nota de um aluno para a o exame final
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 05/03/2024
Var
// Seção de Declarações das variáveis 
numero1: real
numero2: real
numero3: real
numero4: real
resultado: real
resultadofinal: real
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Calcular média do aluno e se ele está reprovado ou aprovado")
escreval(" Olá, digite a primeira nota!")
leia(numero1)
escreval("Olá, digite a segunda nota!")
leia(numero2)
escreval("Olá, digite a nota da terceira nota!")
leia(numero3)
// Seção que calcula a média das notas do aluno e determina se ele foi APROVADO DIRETO, REPROVADO DIRETO ou foi para o EXAME FINAL
resultado:= (numero1+numero2+numero3)/3
se(resultado>=75) então
escreva("A sua média é:",resultado)
escreval("ALUNO APROVADO DIRETO")
senão
se(resultado<=39) então
escreval("A sua média é:",resultado)
escreval("ALUNO REPROVADO DIRETO")
senão
escreval("A sua média é:",resultado)
escreval("ALUNO DE EXAME FINAL")
// Seção que calcula a média das médias anuais do aluno com o resultado do EXAME FINAl e determina se ele foi APROVADO FINAL ou REPROVADO FINAL
escreval("Digite a nota do exame final!")
leia(numero4)
resultadofinal:= (numero4+resultado)/2
se(resultadofinal>=50) então
escreval("Sua média final é:",resultadofinal)
escreval("ALUNO APROVADO FINAL")
senão
escreval("Sua média final é:",resultadofinal)
escreval("ALUNO REPROVADO FINAL")
fimse
fimse
fimse
Fimalgoritmo