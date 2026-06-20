programa
{
	
	funcao inicio()
	{	
		real salario = 0.0
		inteiro Filhos
		
		real medSalario = 0.0
		real medNumFilhos = 0.0
		real maiorSal = 0.0
		real salAteCem = 0.0
		real cont = 0.0

		faca {
			escreva ("Qual o seu salário?\n"
			+"Digite um salario negativo para parar\n")
			leia (salario)

			se (salario < 0){
				pare
			}

			escreva ("Quantos filhos você tem?\n")
			leia (Filhos)

			se (salario > maiorSal){
				maiorSal = salario
			}

			se (salario <= 100){
				salAteCem ++
			}

			medSalario += salario

			medNumFilhos += Filhos

			cont ++
		}enquanto (2>1)
		escreva ("A média de salário da população é: "+(medSalario/cont)+"\n")
		escreva ("A média de numero de filhos é: "+(medNumFilhos/cont)+"\n")
		escreva ("O maior salário é: "+(maiorSal)+"\n")
		escreva ("O percentual de pessoas com até R$100.00 é: "+((salAteCem/cont)*100)+"%\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 835; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */