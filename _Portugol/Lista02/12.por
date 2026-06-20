programa
{
	
	funcao inicio()
	{
		inteiro numeros[4]
		inteiro soma = 0
		real media = 0.0
		
		para (inteiro i = 0; i < 4; i++) {
		    escreva("Digite o "+(i+1)+"º numero\n")
		    leia (numeros [i])

		    soma = soma + numeros [i]
		}

		media = soma / 4.0

		escreva ("A media da soma é: "+media)
		


		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 167; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */