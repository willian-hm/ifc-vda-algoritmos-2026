programa
{
	
	funcao inicio()
	{
		real joao = 1.50
		real ze = 1.10
		real cont = 0.0

		enquanto (joao >= ze){
			joao = joao + 0.02
			ze = ze + 0.03
			cont ++
		}

		escreva ("Zé demorou "+cont+" anos para superar o João")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 232; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */