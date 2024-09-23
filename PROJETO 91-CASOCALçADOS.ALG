Algoritmo "CasoCalçados"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : LC
// Descrição   : O programa informa várias informações sobre um calçado e calcula o preço
// Autor(a)    : Victor Schernikau Bahia Bittencourt Vieira
// Data atual  : 19/03/2024 Último Programa feito no Visual G Portugol
Var
// Seção de Declarações das variáveis 
quantidade, tamanho, categoria: inteiro
valorunitario, valortotal: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Bem-vindo à Loja Corrida e Cia!")
escreval("Selecione o gênero:")
escreval("1 - Masculino")
escreval("2 - Feminino")
leia(categoria)
escolha categoria
caso 1
valorunitario:= 150.00
caso 2
valorunitario:= 120.00
outrocaso
escreval("Opção inválida!")
fimescolha
se (categoria>2)entao
escreval("Fim do programa")
senao
escreval("Digite a quantidade desejada:")
leia(quantidade)
escreval("Digite o tamanho do calçado:")
leia(tamanho)
escreval("Selecione a seção:")
escreval("1 - Infantil")
escreval("2 - Jovem")
escreval("3 - Adulto")
leia(categoria)
valortotal:=quantidade*valorunitario
fimse
escolha categoria
caso 1
valortotal:= valortotal*0.9
caso 2
valortotal:= valortotal*0.95
caso 3
outrocaso
escreval("Opção inválida!")
fimescolha
se(categoria>3)entao
escreval("FIM DO PROGRAMA")
senao
escreval("O tamanho dos calçados é: ", tamanho)
escreval("A quantidade de calçados é: ", quantidade)
escreval("O valor total da compra é R$ ", valortotal)
fimse
Fimalgoritmo