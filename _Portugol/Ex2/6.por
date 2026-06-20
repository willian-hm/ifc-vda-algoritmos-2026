programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio 
		real volume = 0.0

		escreva ("Informe o raio da esfera:\n")
		leia (raio)

		volume = 4.0/3.0 * mat.PI * mat.potencia(raio, 3.0) //4.0 e 3.0 para fazer um converção forçada para numeros inteiros
		escreva ("O volume da esfera é: "+volume)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 332; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */