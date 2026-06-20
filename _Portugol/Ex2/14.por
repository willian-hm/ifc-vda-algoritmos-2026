programa
{
	
	funcao inicio()
	{
		cadeia nome
		real salario 
		real vendas
		real comissao
		real salTotal = 0.0

		escreva ("Informe o nome do vendedor\n")
		leia (nome)

		escreva ("Informe o salario de"+nome+"\n")
		leia (salario)

		escreva ("Informe o valor total das vendas:\n")
		leia (vendas)

		escreva ("Informe o % de comissão:\n")
		leia (comissao)

		salTotal = salario + (vendas * comissao / 100.0)

		escreva ("O salario de "+nome+" será: R$:"+salTotal)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 287; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */