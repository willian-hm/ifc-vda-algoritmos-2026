programa
{
	
	funcao inicio()
	{
		real nota1
		real nota2
		real media = 0.0
		cadeia situacao
		
		escreva("Qual a sua primeira nota?\n")
		leia (nota1)
		
		escreva("Qual a sua segunda nota?\n")
		leia (nota2)

		media = (nota1 + nota2) /2

		se (media >= 7){
			situacao = "Aprovado"
		}
		senao {
			situacao = "Reprovado"
		}
		
		escreva ("\nSua média é: "+media+"\n")
		escreva ("Sua situação é: "+situacao)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 428; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */