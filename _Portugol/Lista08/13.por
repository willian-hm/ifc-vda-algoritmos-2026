programa
{
	
	funcao inicio()
	{
		inteiro m[5][5]
		inteiro i
		inteiro j 
		inteiro l4 = 0
		inteiro c2 = 0
		inteiro dp = 0
		inteiro ds = 0
		inteiro soma = 0

		para(i=0; i < 5; i++){
			para(j=0; j < 5; j++){
				m[i][j] = sorteia (0,5)

				se(i == 3){
					l4 += m[i][j]
				}
				se (j == 1){
					c2 += m[i][j]
				}
				se(i==j){
					dp += m[i][j]
				}
				se((i+j) == 4){
					ds += m[i][j]
				}
				soma += m[i][j]
			}
		}

		para(i=0; i < 5; i++){
			para(j=0; j < 5; j++){
				escreva (m[i][j]+"\t")
			}
			escreva ("\n")
		}

		escreva ("Soma da linha 4: "+l4+"\n")
		escreva ("Soma da coluna 2: "+c2+"\n")
		escreva ("Soma da diagonal principal: "+dp+"\n")
		escreva ("Soma da diagoal secundária: "+ds+"\n")
		escreva ("Soma total: "+soma+"\n")
	}
	
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 765; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */