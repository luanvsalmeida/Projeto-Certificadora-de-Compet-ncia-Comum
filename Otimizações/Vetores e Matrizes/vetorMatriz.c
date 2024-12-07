#include <stdio.h>

void estatisticasJogadores() {
    int estatisticas[2][3]; // [jogadores][estatísticas]
    const char *categorias[] = {"Pontos", "Rebotes", "Assistências"};

    printf("Estatísticas de 2 Jogadores\n");

    for (int i = 0; i < 2; i++) {
        printf("\nJogador %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Digite %s: ", categorias[j]);
            scanf("%d", &estatisticas[i][j]);
        }
    }

    printf("\nResumo das Estatísticas:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nJogador %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%s: %d\n", categorias[j], estatisticas[i][j]);
        }
    }
}

void pontosJogos() {
    int jogos, i, total = 0; // Total de pontos e número de jogos

    printf("Quantos jogos o jogador participou? ");
    scanf("%d", &jogos);

    int pontos[jogos]; // Vetor para armazenar a pontuação de cada jogo

    // Solicita os pontos de cada jogo
    for (i = 0; i < jogos; i++) {
        printf("Pontos no jogo %d: ", i + 1);
        scanf("%d", &pontos[i]);
        total += pontos[i]; // Soma os pontos ao total
    }

    // Exibe os pontos por jogo
    printf("\nPontuação por jogo:\n");
    for (i = 0; i < jogos; i++) {
        printf("Jogo %d: %d pontos\n", i + 1, pontos[i]);
    }

    printf("\nTotal de pontos marcados: %d\n", total);
}