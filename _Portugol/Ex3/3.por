programa
{
	inclua biblioteca Calendario 
	
	funcao inicio()
	{	inteiro ano = Calendario.ano_atual()
		real nascimento
		real situacao
		

		escreva("Qual sua data de nascimento\n")
		leia (nascimento)
		
		situacao = ano - nascimento
		
		se (situacao >= 16 e situacao < 18){
			escreva ("Você pode votar!")
		}
		senao se (situacao >= 18 e situacao <= 70){
			escreva ("Você é obrigado a votar!")
		}senao{
			escreva ("Você não precisa votar!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 456; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */