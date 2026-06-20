programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio
		real altura 
		real area = 0.0 //variaveis reais devem ser 0.0 pois se for so 0 é numero inteiro

		escreva ("Informe o raio do cilindro:\n")
		leia (raio)

		escreva ("Informe a altura do cilindro:\n")
		leia (altura)

		area = 2* mat.PI * raio * altura

		escreva ("A área é: "+mat.arredondar(area, 3)+"cm³")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 343; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */