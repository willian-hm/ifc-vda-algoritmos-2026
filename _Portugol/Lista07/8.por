programa
{
	
	funcao inicio()
	{
		inteiro numeros[10]
		inteiro i
		inteiro maior = 0
		inteiro iMaior = 0

		para(i=0; i < 10; i++){
			escreva("Informe o "+(i+1)+"º valor\n")
			leia (numeros[i])

			se((numeros[i] > maior) ou (i == 0)){
				maior = numeros[i]
				iMaior = i
			}
		}
		escreva ("Maior valor é: "+maior+" na posição "+(iMaior+1)+"\n")

			escreva ("Dados do vetor:\n")
			para(i=0; i < 10; i++){
				escreva (numeros[i]+"  ")
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 455; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */