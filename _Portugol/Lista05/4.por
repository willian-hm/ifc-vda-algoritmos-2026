programa
{
	
	funcao inicio()
	{
		inteiro ponto 
		inteiro jg1 = 0
		inteiro jg2 = 0

		faca{
			escreva ("Placar atual:\n")
			escreva ("Jogador 1: "+jg1+" pontos\n")
			escreva ("Jogador 2: "+jg2+" pontos\n\n")
			escreva ("Quem marcou o ponto:\n")
			escreva ("1 - jogador 1\n")
			escreva ("2 - jogador 2\n")
			leia (ponto)
			escreva("\n")

			se (ponto == 1){
				jg1 ++
			}senao se(ponto == 2){
				jg2 ++
			}senao{
				escreva("Ponto mal informado!!\n")
			}
		}enquanto ( ((jg1 < 3) ou (jg1 < (jg2 + 2))) e ((jg2 < 3) ou (jg2 < (jg1 + 2))) )

		escreva ("Placar Final!\n")
		escreva ("Jogador 1 "+jg1+" pontos\n")
		escreva ("Jogador 2 "+jg2+" pontos\n")

		se(jg1 > jg2){
			escreva ("Jogador 1 venceu!\n")
		}senao{
			escreva ("Jogador 2 venceu!\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 318; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */