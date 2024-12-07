#include <stdio.h>

void mediaPontos() {
    float pontos, soma = 0;
    int contador = 0;

    printf("Média de Pontos do Jogador\n");
    printf("Digite os pontos por jogo (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Jogo %d: ", contador + 1);
        scanf("%f", &pontos);

        if (pontos < 0) break;

        soma += pontos;
        contador++;
    }

    if (contador > 0) {
        printf("\nO jogador participou de %d jogos.\n", contador);
        printf("Média de pontos: %.2f por jogo.\n", soma / contador);
    } else {
        printf("\nNenhuma pontuação foi registrada.\n");
    }
}

void percentualAcertos() {
    int tentativas, acertos;
    float percentual;

    printf("Percentual de Acertos nos Arremessos\n");

    printf("Digite o número total de tentativas: ");
    scanf("%d", &tentativas);

    printf("Digite o número total de acertos: ");
    scanf("%d", &acertos);

    if (tentativas > 0) {
        percentual = (float)acertos / tentativas * 100;
        printf("Percentual de acertos: %.2f%%\n", percentual);
    } else {
        printf("O número de tentativas deve ser maior que zero.\n");
    }
}