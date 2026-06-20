programa
{
	
	funcao inicio()
	{
		inteiro numeros [20] //Vetor
		inteiro i 
		inteiro flag = 0

		//Recebimento dos valores
		para (i=0; i<20; i++){
			escreva ("Informe o número para a posição "+(i+1)+"\n")
			leia (numeros [i])
		}

		//Verificação das posiçoes do valor 10 no vetor
		para(i=0; i<20; i++){
			se(numeros [i] == 10){
				se (flag == 0){
					escreva ("Número 10 encontrado na(s) posição(ões):\n")
				}
				escreva ((i+1)+"\n")
				flag = 1
			}
		}

		se (flag == 0){
			escreva ("Nenhum número 10 encontrado1!")
		}
		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 542; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */