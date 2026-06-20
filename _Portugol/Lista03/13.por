programa
{
	
	funcao inicio()
	{
		cadeia m1
		real t1
		cadeia m2
		real t2
		cadeia m3
		real t3
		cadeia m4
		real t4
		cadeia m5
		real t5
		real tempMedia = 0.0
		inteiro tempInf = 0

		escreva ("Informe o nome do municipio 1:\n")
		leia (m1)
		escreva ("Informe a temperatura de :"+m1+":\n")
		leia (t1)
		
		escreva ("Informe o nome do municipio 2:\n")
		leia (m2)
		escreva ("Informe a temperatura de :"+m2+":\n")
		leia (t2)
		
		escreva ("Informe o nome do municipio 3:\n")
		leia (m3)
		escreva ("Informe a temperatura de :"+m3+":\n")
		leia (t3)
		
		escreva ("Informe o nome do municipio 4:\n")
		leia (m4)
		escreva ("Informe a temperatura de :"+m4+":\n")
		leia (t4)
		
		escreva ("Informe o nome do municipio 5:\n")
		leia (m5)
		escreva ("Informe a temperatura de :"+m5+":\n")
		leia (t5)

		tempMedia = (t1 + t2 + t3 + t4 + t5)/5.0

		escreva ("A temperatura média é: "+tempMedia+"\n")

		se (t1 <10){
			tempInf ++
		}se (t2 <10){
			tempInf ++
		}se (t3 <10){
			tempInf ++
		}se (t4 <10){
			tempInf ++
		}se (t5 <10){
			tempInf ++
		}

		escreva (tempInf+" municipios com temperatura inferior a 10°C\n")

		escreva ("Muncípios com temperatura superios a 30°C:\n")
		se(t1 > 30){
			escreva (m1+"\n")
		}se(t2 > 30){
			escreva (m2+"\n")
		}se(t3 > 30){
			escreva (m3+"\n")
		}se(t4 > 30){
			escreva (m4+"\n")
		}se(t5 > 30){
			escreva (m5+"\n")
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1374; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */