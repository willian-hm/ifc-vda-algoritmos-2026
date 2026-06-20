programa
{
	
	funcao inicio()
	{	
		inteiro voto = 0
		inteiro candidato1 = 0
		inteiro candidato2 = 0
		inteiro candidato3 = 0
		inteiro candidato4 = 0
		inteiro branco = 0
		inteiro nulo = 0
		
		faca{
			escreva("Qual candidato deseja votar?\n"
			+"1 - Candidato 1\n"
			+"2 - Candidato 2\n"
			+"3 - Candidato 3\n"
			+"4 - Candidato 4\n"
			+"5 - Voto nulo\n"
			+"6 - Voto em branco\n"
			+"0 - Para parar\n")
			leia (voto)

			se(voto == 1){
				candidato1 ++
			}senao se(voto == 2){
				candidato2 ++
			}senao se(voto == 3){
				candidato3 ++
			}senao se(voto == 4){
				candidato4 ++
			}senao se(voto == 5){
				branco ++
			}senao se(voto == 6){
				nulo ++
			}senao se (voto == 0){
				//faz nada
			}senao{
				escreva ("O voto não é válido!!")
				pare
			}
		}enquanto(voto != 0)
		escreva("\n")
		escreva ("O total de votos para cada candidato é:\n"
		+"Candidato 1: "+candidato1+"\n"
		+"Candidato 2: "+candidato2+"\n"
		+"Candidato 3: "+candidato3+"\n"
		+"Candidato 4: "+candidato4+"\n")
		escreva ("O total de votos em branco é: "+branco+"\n")
		escreva ("O total de votos nulos é: "+nulo+"\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 719; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */