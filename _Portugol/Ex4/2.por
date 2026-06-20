programa
{
	
	funcao inicio()
	{
		inteiro tab
		inteiro lim
		inteiro cont = 0

		escreva ("Qual a tabuada desejada \n")
		leia (tab)

		escreva ("Qual o limite para calcular \n")
		leia (lim)

		enquanto (cont <= lim){
			escreva (tab+" X "+cont+" = "+(tab * cont)+"\n")
			 
			cont ++
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 282; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */