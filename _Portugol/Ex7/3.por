programa
{
	
	funcao inicio()
	{	
		inteiro numeros [99]
		inteiro i
		inteiro n
		inteiro soma = 0

		escreva ("Informe a quantidade de números:\n")
		leia (n)

		para (i=0; i<n; i++){
			escreva("Infome o valor para a posição "+(i+1)+"\n")
			leia (numeros [i])
		}
		escreva ("Valores do vetor :\n")
		para(i=0; i<n; i++){
			escreva (numeros[i]+" ")
			se(i % 2 ==0){
				soma += numeros[i]
			}
		}
		escreva ("Soma dos elementos de índice par:\n "+(soma))
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 355; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */