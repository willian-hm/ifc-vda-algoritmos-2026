programa
{
	
	funcao inicio()
	{
		inteiro vet [10]
		inteiro mult
		inteiro i

		escreva("Qual o valor para multiplicar o vetor:\n")
		leia (mult)

		para(i=0; i < 10; i++){
			escreva("Informe o valor para as posições"+(i+1)+"\n")
			leia (vet[i])
		}

		escreva("Vetor original:\n")
		para(i=0; i < 10; i++){
			escreva(vet[i]+"  ")
			vet[i] *= mult
		}
		
		escreva("\nVetor final\n")
		para(i=0; i < 10; i++){
			escreva(vet[i]+"  ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 444; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */