programa
{
	
	funcao inicio()
	{
		inteiro i 
		inteiro num
		inteiro maior = 0
		inteiro menor = 9999
		

		para (i=0; 2>1 ;i++){
			escreva ("Informe um número: 0 para finalizar\n")
			leia (num)

			se (num == 0){
				escreva ("Foi digitado 0, esse valor é desconsiderado\n")
				pare
			}senao se(num < 0){
				escreva ("Valores negativos são desconsiderados\n")
			}senao{
				se (num > maior){
					maior = num
				}
				se(num < menor){
					menor = num
				}
			}
		}
		escreva("Maior valor digitado foi "+maior+"\n")
		escreva ("Menor valor digitado foi "+menor+"\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 581; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */