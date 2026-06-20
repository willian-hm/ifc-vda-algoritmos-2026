programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio
		real altura
		real volume = 0.0
		
		escreva("Escreva o raio do cone\n")
		leia (raio)

		escreva("Escreva a altura do cone\n")
		leia (altura)

		volume = (mat.PI * mat.potencia(raio, 2.0) * altura) /3.0 
		escreva ("O volume do cone é: "+volume)

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 337; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */