programa
{
	
	funcao inicio()
	{
		inteiro n [12]
		inteiro x [12]
		inteiro y [12]
		inteiro i

		para(i=0; i<12; i++){
			escreva("Infome um valor para a posição "+(i+1)+"\n")
			leia(n[i])

			se ((n[i] % 2 == 0) e (n[i] % 3 == 0)){
				x[i] = n[i] 
			}
			se((n[i] % 2 == 1) e (n[i] % 5 == 0)){
				y[i] = n[i]
			}
		}
		escreva ("Pares divisiveis por 3:\n")
		para (i=0; i<12; i++){
			se (x[i] != 0){
				escreva (x[i]+"  ")
			}
		}
		escreva ("\nPares divisiveis por 5:\n")
		para (i=0; i<12; i++){
			se (y[i] != 0){
				escreva (y[i]+"  ")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 461; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */