programa
{
	
	funcao inicio()
	{
		real idade 
		real peso
		real jog = 0.0
		inteiro time = 0
		inteiro somaIdadeTime = 0
		real somaPesoTime = 0.0
		inteiro somaIdadeTotal = 0
		real somaPesoTotal = 0.0

		faca{
			escreva ("Dados do time "+(time+1)+"\n")
			faca{
				escreva("Infome a idade do jogador "+(jog+1)+"\n")
				leia (idade)

				escreva ("Informe o peso do jogador"+(jog+1)+"\n")
				leia (peso)

				somaIdadeTime += idade 
				somaPesoTime += peso

				somaIdadeTotal += idade
				somaPesoTotal += peso

				jog ++
			}enquanto(jog < 2)
			escreva ("Médida de idade do time "+(time+1)+":"+(somaIdadeTime/jog)+"\n")
			escreva("Média de peso do time "+(time+1)+":"+(somaPesoTime/jog)+"\n")

			jog = 0.0
			somaIdadeTime = 0
			somaPesoTime = 0.0
			time ++
		}enquanto(time < 2)
			jog = 2.0
			escreva ("Média total de idades: "+(somaIdadeTotal/(jog*time))+"\n")
			escreva ("Média total de pesos "+(somaPesoTotal/(jog*time)))
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 813; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */