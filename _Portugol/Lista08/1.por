programa
{
	
	funcao inicio()
	{
		inteiro matriz [5][5]
		real somaPar = 0.0
		inteiro contPar = 0
		inteiro i
		inteiro j

		para(i=0; i < 5; i++){
			para(j=0; j < 5; j++){
				escreva ("Informe um número para ["+i+"]["+j+"]\n")
				leia (matriz [i][j])
			}
		}

		para(i=0; i < 5; i++){
			para(j=0; j < 5; j++){
				se(matriz[i][j] % 2 == 0){
					somaPar += matriz [i][j]
					contPar ++
				}
			}
		}

		para(i=0; i < 5; i++){
			para(j=0; j < 5; j++){
				escreva (matriz [i][j]+"  ")
			}
			escreva ("\n")
		}
		escreva ("A média dos pares é: "+(somaPar/contPar))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 580; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */