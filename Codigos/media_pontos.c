#include <stdio.h>

int main() {
    float pontos, soma = 0; // Variáveis para armazenar pontos e soma total
    int contador = 0;       // Contador de jogos

    printf("Média de Pontos do Jogador\n");
    printf("Digite os pontos por jogo (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Jogo %d: ", contador + 1); // Solicita pontos para cada jogo
        scanf("%f", &pontos);

        if (pontos < 0) break; // Sai do loop ao digitar um número negativo

        if (pontos < 0 || pontos > 200) {
            // Verifica se os pontos são válidos (exemplo: 0-200)
            printf("Número inválido de pontos! Tente novamente.\n");
            continue; // Ignora entradas inválidas
        }

        soma += pontos; // Adiciona os pontos ao total
        contador++;     // Incrementa o contador de jogos
    }

    if (contador > 0) {
        // Calcula e exibe a média somente se houver jogos registrados
        printf("\nO jogador participou de %d jogos.\n", contador);
        printf("Média de pontos: %.2f por jogo.\n", soma / contador);
    } else {
        printf("\nNenhuma pontuação foi registrada.\n");
    }

    return 0;
}
