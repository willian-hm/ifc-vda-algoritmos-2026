#include <stdio.h>

main() {
    int jogador1Pontos = 0;
    int jogador2Pontos = 0;
    int codigoJogador;

    while (true) {
        printf("Insira o código do jogador (1 ou 2) que ganhou o ponto: ");
        scanf("%i", &codigoJogador);

        if (codigoJogador == 1) {
            jogador1Pontos++;
        } else if (codigoJogador == 2) {
            jogador2Pontos++;
        }

        printf("Jogador 1 tem %i pontos e Jogador 2 tem %i pontos.\n", jogador1Pontos, jogador2Pontos);

        if (jogador1Pontos >= 21 && (jogador2Pontos < 21 || (jogador1Pontos - jogador2Pontos) >= 2)) {
            printf("Jogador 1 ganha a partida!\n");
            break;
        } else if (jogador2Pontos >= 21 && (jogador1Pontos < 21 || (jogador2Pontos - jogador1Pontos) >= 2)) {
            printf("Jogador 2 ganha a partida!\n");
            break;
        }
    }
}