programa
{
	
	funcao inicio()
	{
		inteiro i 
		real preco
		real total = 0.0

		para (i=0; 2>1; i++){
			escreva ("Informe o preço do "+(i+1)+"º produto\n")
			leia (preco)

			se (preco == 0){
				pare
			}
			
			total += preco
		}
		escreva ("Valor total da compra: R$ "+total)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 100; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */