programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real i
		inteiro f1 = 0
		inteiro f2 = 0
		inteiro f3 = 0
		inteiro f4 = 0
		inteiro f5 = 0
		inteiro idade
		
		para (i=0.0; i<5; i++){
			escreva("Informe a idade da pessoa "+(i+1)+"\n")
			leia (idade)

			se (idade <= 15){
				f1++
			}senao se(idade <= 30){
				f2++
			}senao se(idade <= 45){
				f3++
			}senao se(idade <= 60){
				f4++
			}senao{
				f5++
			}
		}
		escreva ("\n")
		escreva (f1+"Pessoas na faixa 1, total de "+mat.arredondar(f1/i*100, 2)+"%\n")
		escreva (f2+"Pessoas na faixa 2, total de "+mat.arredondar(f2/i*100, 2)+"%\n")
		escreva (f3+"Pessoas na faixa 3, total de "+mat.arredondar(f3/i*100, 2)+"%\n")
		escreva (f4+"Pessoas na faixa 4, total de "+mat.arredondar(f4/i*100, 2)+"%\n")
		escreva (f5+"Pessoas na faixa 5, total de "+mat.arredondar(f5/i*100, 2)+"%\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 197; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */