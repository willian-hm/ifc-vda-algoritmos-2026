programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio
		real altura
		real area
		
		escreva("Qual a altura do cone\n")
		leia (altura)

		escreva("Qual o raio do cone\n")
		leia (raio)

		area = mat.PI * raio * altura
		escreva("A área do cone é: "+area)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 297; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */