programa
{
	
	funcao inicio()
	{
		inteiro idade[5]
		real altura [5]
		inteiro i

		//Recebimento dos valores
		para(i=0; i<5; i++){
			escreva ("Informe a idade da passoa "+(i+1)+"\n")
			leia (idade[i])

			escreva ("Informe a altura da passoa "+(i+1)+"\n")
			leia (altura[i])
		}

		para (i=4; i>=0; i--){
			escreva ("Pessoa "+(i+1)+ " - Idade:"+idade[i]+" - Altura:"+altura[i]+"\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 86; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */