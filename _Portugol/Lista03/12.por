programa
{
	
	funcao inicio()
	{
		real salInicial
		real salFinal = 0.0
		cadeia nome 

		escreva ("Qual o seu nome?\n")
		leia (nome)

		escreva ("Qual o seu salário?\n")
		leia (salInicial)

		se ((salInicial > 0) e (salInicial <= 300)){
			salFinal = salInicial * 1.1
		}senao se((salInicial > 300)e(salInicial <= 600)){
			salFinal = salInicial * 1.11
		}senao se((salInicial > 600)e(salInicial <= 900)){
			salFinal = salInicial * 1.12
		}senao se((salInicial > 900)e(salInicial <= 1500)){
			salFinal = salInicial * 1.06
		}senao se((salInicial > 1500)e(salInicial <= 2000)){
			salFinal = salInicial * 1.03
		}senao se(salInicial > 2000){
			salFinal = salInicial
		}

		escreva ("Salario inicial de "+nome+": "+salInicial+"\n")
		escreva ("Ajuste salarial: "+salFinal)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 789; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */