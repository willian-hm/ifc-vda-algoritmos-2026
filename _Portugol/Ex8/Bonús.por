programa
{
	//receba 10 valores e os apresente em ordem crescente 
	
	funcao inicio()
	{
		inteiro num [10]
		inteiro i
		inteiro j
		inteiro aux

		para(i=0; i < 10; i++){
			escreva ("Digite o valor para a posição:"+(i+1)+"\n")
			leia (num[i])
		}
		para(i=0; i < 9; i++){
			para(j=0; j < 9; j++){
				se(num[j] > num[j+1]){
					aux = num[j]
					num[j] = num[j+1]
					num[j+1] = aux
				}
		}
		}
		escreva ("\nValores organizados em ordem crescente\n")
		para(i=0; i < 10; i++){
			escreva (num[i]+"  ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 385; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */