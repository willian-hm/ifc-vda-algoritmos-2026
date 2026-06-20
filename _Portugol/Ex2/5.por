programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio 
		real altura
		real volume = 0.0
		
		escreva("Qual o raio do cilindro\n")
		leia (raio)

		escreva("Qual a altura do cilindro\n")
		leia (altura)

		volume = mat.PI * mat.potencia(raio, 2.0) * altura
		escreva("O volume do cilindro é: "+volume)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 335; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */