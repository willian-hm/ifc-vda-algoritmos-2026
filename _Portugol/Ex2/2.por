programa
{
	
	funcao inicio()
	{
		//Faça um algoritmo para calcular a área de um cubo retangular ((h*l)+(h*b)+(l*b))*2
		real altura
		real base
		real lado
		real area = 0.0
		
		escreva ("Informe a altura do cubo retangular\n")
		leia (altura)
		escreva ("Informe a base do cubo retangular\n")
		leia (base)
		escreva ("Informe o lado do cubo retangular\n")
		leia (lado)

		area = ((altura*lado)+(altura*base)+(lado*base)) * 2.0

		escreva ("A área total do cubo retangular é: "+area)
		

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 493; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */