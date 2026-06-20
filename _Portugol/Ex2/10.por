programa
{
	
	funcao inicio()
	{
		real numHoras
		real valorHora
		real percINSS
		real salLiq = 0.0

		escreva ("Informe o numero de horas trabalhadas\n")
		leia (numHoras)

		escreva ("Informe o valor da hora trabalhada\n")
		leia (valorHora)

		escreva ("Informe o percentual de INSS:\n")
		leia (percINSS)

		salLiq = (numHoras * valorHora) - (numHoras * valorHora * percINSS/100.0)

		escreva ("Salario liquido: R$"+salLiq)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 434; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */