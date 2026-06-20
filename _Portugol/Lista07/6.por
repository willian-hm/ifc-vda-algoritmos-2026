programa
{
	
	funcao inicio()
	{
		inteiro v1 [10]
		inteiro v2 [10]
		inteiro v3 [20]
		inteiro i
		inteiro j = 0

		para(i=0; i<10; i++){
			escreva("Informe o "+(i+1)+"º valor do vetor 1\n")
			leia (v1[i])
		}

		para(i=0; i<10; i++){
			escreva("Informe o "+(i+1)+"º valor do vetor 2\n")
			leia (v2[i])
		}

		para(i=0; i<10; i++){
			v3[j] = v1[i]
			j++
			v3[j] = v2[i]
			j++
		}

		para (i=0; i<20; i++){
			escreva (v3[i]+"  ")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 89; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */