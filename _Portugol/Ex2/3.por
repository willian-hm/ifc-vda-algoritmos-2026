programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio 
		real area = 0.0

		escreva ("Informe o raio da esfera:\n")
		leia (raio)

		area = 4 * mat.PI * mat.potencia(raio, 2.0)
		escreva ("A área da esfera é: "+area)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 249; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */