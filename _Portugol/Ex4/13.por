programa
{
	
	funcao inicio()
	{
		inteiro num
		inteiro cont

		escreva ("Informe o número:\n")
		leia (num)

		cont = num

		enquanto (cont >= 1){
			se (num % cont == 0){
				escreva (cont+"  ")
			}
			cont --
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 218; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */