programa
{
	
	funcao inicio()
	{
		inteiro m[7][4]
		inteiro i
		inteiro j
		inteiro menor = 9999
		inteiro iMenor = 0
		inteiro jMenor = 0

		para(i=0; i < 7; i++){
			para(j=0; j < 4; j++){
				m[i][j] = sorteia(0, 99)

				se(m[i][j] < menor){
					menor = m[i][j] 
					iMenor = i
					jMenor = j
				}
			}
		}
		para(i=0; i < 7; i++){
			para(j=0; j < 4; j++){
				escreva (m[i][j]+"\t")
			}
			escreva ("\n")
		}
		escreva ("O menor valor é: "+m[iMenor][jMenor]+"\n")
		escreva ("Na posição ["+iMenor+"]["+jMenor+"]\n")		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 531; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */