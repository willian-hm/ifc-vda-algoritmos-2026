programa
{
	
	funcao inicio()
	{
		cadeia cpf
		inteiro dep
		real renda
		real salMin
		real desc = 0.0
		real imposto = 0.0
		
		escreva("Informe o cpf do contribuinte:\n")
		leia (cpf)
		
		escreva("Qual a quantidade de dependentes:\n")
		leia (dep)

		escreva("Qual a renda:\n")
		leia (renda)

		escreva("Qual o valor do salário minimo:\n")
		leia (salMin)

		se (dep == 1){
			desc = 0.05
		}senao se (dep == 2){
			desc = 0.1
		}senao se (dep >= 3){
			desc = 0.15
		}

		se (renda <= (2 * salMin)){
			escreva ("Contribuinte "+cpf+" está isento de IR")
		}senao{
			se (renda <= (3 * salMin)){
				imposto = (renda * 0.05) - (desc * salMin)		
			}senao se (renda <= (5 * salMin)){
				imposto = (renda * 0.1) - (desc * salMin)		
			}senao se (renda <= (7 * salMin)){
				imposto = (renda * 0.15) - (desc * salMin)		
			}senao{
				imposto = (renda * 0.2) - (desc * salMin)		
			}
			escreva ("Contribuinte "+cpf+" vai pagar R$"+imposto)
		}

		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 950; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */