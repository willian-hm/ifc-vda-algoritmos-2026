programa
{
	
	funcao inicio()
	{
		inteiro lim
		real total = 1.0
		real cont = 1.0

		escreva ("Informe o limite de cálculo?\n")
		leia (lim)

		enquanto (cont <= lim){
			total += 1 / cont
			cont ++
		}
		escreva ("Total é: "+total)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 188; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */