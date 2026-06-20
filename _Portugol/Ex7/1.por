programa
{
	
	funcao inicio()
	{
		inteiro numeros [10] //Vetor
		inteiro i 
		inteiro flag = 0

		//Recebimento dos valores
		para (i=0; i<10; i++){
			escreva ("Informe o número para a posição "+(i+1)+"\n")
			leia (numeros [i])
		}

		//Verificação dos numeros maiores que 20
		para(i=0; i<10; i++){
			se(numeros [i] > 20){
				se (flag == 0){
					escreva ("Número(s) maior(es) que 20:\n")
				}
				escreva (numeros[i]+"\n")
				flag = 1
			}
		}

		se (flag == 0){
			escreva ("Nenhum número maior que 20 encontrado!")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 453; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */