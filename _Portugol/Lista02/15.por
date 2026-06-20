programa
{
	
	funcao inicio()
	{
		cadeia nome
		real dist
		real tempo
		real velMedia = 0.0

		escreva ("Informe o nome do piloto:\n")
		leia (nome)

		escreva ("Informe a distancia percorrido:\n")
		leia (dist)

		escreva ("Informe o tempo gasto:\n")
		leia (tempo)

		velMedia = dist / tempo

    escreva ("A velocidade média do "+nome+" foi "+velMedia+"km/h. ")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 300; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */