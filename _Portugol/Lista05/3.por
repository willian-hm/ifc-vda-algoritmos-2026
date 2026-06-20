programa
{
	
	funcao inicio()
	{
		inteiro num
		inteiro cont = 0
		inteiro par = 0
		inteiro pos = 0

		faca{
			escreva ("Informe um número:\n") 
			leia (num)

			se (num % 2 == 0){ // "%": resto da divisão (igual transformar decimal para binário
				par ++
			}

			se (num > 0){
				pos ++
			}
			cont ++
		}enquanto(cont < 5)

		escreva ("Foram digitados "+par+" pares\n")
		escreva ("Foram digitados "+(5-par)+" ímpares\n")
		escreva ("Foram digitados "+pos+" positivos\n")
		escreva ("Foram digitados "+(5-pos)+" negativos\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 334; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */