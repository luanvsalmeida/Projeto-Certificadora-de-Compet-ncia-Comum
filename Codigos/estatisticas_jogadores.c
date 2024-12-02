#include <stdio.h>

int main() {
    int estatisticas[2][3]; // [jogadores][estatísticas]
    const char *categorias[] = {"Pontos", "Rebotes", "Assistências"};

    printf("Estatísticas de 2 Jogadores\n");

    // Solicita estatísticas de cada jogador
    for (int i = 0; i < 2; i++) {
        printf("\nJogador %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Digite %s: ", categorias[j]);
            scanf("%d", &estatisticas[i][j]);
        }
    }

    // Exibe as estatísticas
    printf("\nResumo das Estatísticas:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nJogador %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%s: %d\n", categorias[j], estatisticas[i][j]);
        }
    }

    return 0;
}
