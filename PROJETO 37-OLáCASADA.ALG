Algoritmo "OláCasada"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa pergunta e solicita quantos anos de casamento tem a pessoa (igual ao boto cor-de-rosa)
// Autor(a)    : Victor Schernikau BAhia Bittencourt Vieira
// Data atual  : 07/03/2024
Var
// Seção de Declarações das variáveis 
estadocivil, sexo, anos: inteiro
nome: caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Qual é o seu nome?")
leia(nome)
escreval("Qual é o seu gênero? Digite 1 para Homem, 2 para Mulher e 3 para Outro")
leia(sexo)
se(sexo=1)entao
escreva("Qual é o seu estado civil,", nome)
escreva("?")
escreval("")
escreval("Digite 1 para solteiro, 2 para casado, 3 para divorciado e 4 para outro")
leia(estadocivil)
escreval("Obrigado pelas informações! Está cadastrado no sistema Boto!")
senão
se(sexo=3)entao
escreva("Qual é o seu estado civil,", nome)
escreva("?")
escreval("")
escreval("Digite 1 para solteiro, 2 para casado, 3 para divorciado e 4 para outro")
leia(estadocivil)
escreval("Obrigado pelas informações! Está cadastrado no sistema Boto!")
senão
se(sexo=2)então
escreva("Opa... Qual é o seu estado civil, ", nome)
escreva("?")
escreval("")
escreval("Digite 1 para solteiro, 2 para casado, 3 para divorciado e 4 para outro")
leia(estadocivil)
se(estadocivil=1) e (estadocivil=3) e (estadocivil=4)então
então
escreval("Que pena.... Obrigado pelas informações! Está cadastrada no sistema Boto!")
senão
se(estadocivil=2)então
escreval("Oi casada... Sou o boto cor-de-rosa, a quantos anos você é casada?")
leia(anos)
escreval("Que ótimo, eu..... Perdão! Erro de sistema! Obrigado pelas informações! Está cadastrado no sistema Boto!")
senão
escreval("Que pena. Obrigado pelas informações! Está cadastrado no sistema Boto!")
fimse
fimse
fimse
fimse
fimse
Fimalgoritmo