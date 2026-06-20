programa
{
	
	funcao inicio()
	{
		inteiro n
		inteiro a1
		inteiro r
		inteiro soma = 0
		inteiro cont = 0

		escreva ("Informe o número de termos:\n")
		leia (n)

		escreva ("Informe o primeiro termo:\n")
		leia (a1)

		escreva ("Informe o razão da progressão:\n")
		leia (r)

		enquanto(cont < n){
			escreva (a1+"  ")
			soma += a1
			a1 += r
			cont ++
		}

		escreva ("\nA soma é: "+soma)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 409; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */