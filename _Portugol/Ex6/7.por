programa
{
    funcao inicio()
    {
        inteiro num
        inteiro i
        inteiro div

        para (num = 100; num <= 1000; num++){
            div = 0 // reinicia a variável para cada número

            para(i = 2; i < (num/2); i++){
                se (num % i == 0){
                    div = 1
                    pare
                }
            }

            se (div == 0){
                escreva(num + " é primo\n")
            } senao {
                escreva(num + " não é primo\n")
            }
        }
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 245; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */