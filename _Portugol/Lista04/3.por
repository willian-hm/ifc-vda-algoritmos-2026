programa
{
	
	funcao inicio()
	{
		inteiro num 
		inteiro neg = 0
		
		enquanto (2>1){
			escreva ("Informe o número: \n"
			+ "Ou digite 0 para finalizar\n")
			leia (num)
			
			se (num == 0){
				pare
			}

			se (num < 0){
				neg ++
			}
		}
		escreva ("Foram digitados "+neg+" números negativos")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 161; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */