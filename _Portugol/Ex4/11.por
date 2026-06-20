programa
{
	inclua biblioteca Util --> ut
	
	funcao inicio()
	{
		inteiro num = ut.sorteia(1, 100)
		inteiro palpite
		inteiro cont = 0

		enquanto(2>1){
			escreva ("De o seu palpite do número:\n")
			leia (palpite)

			cont ++

			se (palpite > num){
				escreva ("Número é menor\n")
			}senao se(palpite < num){
				escreva ("Número é maior\n")
			}senao{
				escreva ("Acertou em "+cont+" tentativas")
				pare 
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 419; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */