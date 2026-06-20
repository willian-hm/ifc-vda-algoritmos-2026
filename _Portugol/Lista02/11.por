programa {
  funcao inicio() {
    real prestacao
    real taxa
    real dias 
    real prestacao_atrasada = 0.0

    escreva ("Qual o valor da prestação?\n")
    leia (prestacao)

    escreva ("Qual o numero de dias de atraso?\n")
    leia (dias)

    escreva ("Qual o valor da taxa de atraso")
    leia (taxa)

    prestacao_atrasada = prestacao + (prestacao * (taxa/100.0) * dias)

    escreva ("O valor final da prestação atrasada é de: "+prestacao_atrasada+"R$")

  }
}
