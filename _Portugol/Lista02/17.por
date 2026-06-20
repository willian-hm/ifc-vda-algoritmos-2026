programa
{
	inclua biblioteca Calendario
	
	funcao inicio()
	{
		inteiro nascimento
		inteiro ano = Calendario.ano_atual()
		inteiro idade = 0

		escreva ("Qual seu ano de nascimento\n")
		leia (nascimento)

		idade = ano - nascimento
		escreva ("A sua idade atual é: "+idade)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 238; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */