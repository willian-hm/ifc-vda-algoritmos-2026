programa
{
	
	funcao inicio()
	{
		real num
		real temp
		real convert = 0.0

		escreva ("Qual a converção que você quer fazer?\n"
		+"1 --> Fahrenheit para Celsius\n"
		+"2 --> Celsius para Fahrenheit\n")
		leia (num)
			
		se (num == 1){
			escreva ("Qual temperatura em Fahrenheit converter?\n")
			leia (temp)
			
			convert = (temp - 32.0)*5.0/9.0
			escreva ("A conveção de Fahrenheit para graus Celsius é: "+convert+"°C")
		}senao{
			escreva ("Qual temperatura em Celsius converter?\n")
			leia (temp)
			
			convert = (temp * 1.8)+32.0
			escreva ("A conveção de graus Celsius para Fahrenheit é: "+convert+"°F")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 492; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */