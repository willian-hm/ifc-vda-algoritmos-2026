programa
{

	funcao inicio()
	{
		cadeia resp[10][10]
		cadeia gab[10]
		inteiro res[10]
		inteiro i
		inteiro j
		inteiro ale
		
		para (i=0;i<10;i++) {
		
			para (j=0;j<10;j++) {
				ale = sorteia (1,4)
				
				se (ale == 1) {
					resp [i][j] = "a"
				} senao se (ale == 2) {
					resp [i][j] = "b"
				} senao se (ale == 3) {
					resp [i][j] = "c"
				} senao {
					resp [i][j] = "d"
				}
			}
			
		}
		
		para (i=0;i<10;i++) {
			ale = sorteia (1,4)
			
			se (ale == 1) {
				gab [i] = "a"
			} senao se (ale == 2) {
				gab [i] = "b"
			} senao se (ale == 3) {
				gab [i] = "c"
			} senao {
				gab [i] = "d"
			}
		
		}
		
		para (i=0;i<10;i++) {
		
			para (j=0;j<10;j++) {
			
				se (resp[i][j] == gab[j]) {
					res[i]++
				}
			}
		
		}
		
		para (i=0;i<10;i++) {
			escreva ("Aluno "+(i+1)+" \t")
			para (j=0;j<10;j++) {
				escreva (resp [i][j] + "\t")
			}
				escreva (res[i]+"\n")
		}
		
		escreva ("\nGabarito:\t")
		para (i=0;i<10;i++) {
			escreva (gab [i]+ "\t")
		}
	
	
	
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 994; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz;
 */