#include <stdio.h>

int main() {
    int tentativas, acertos;
    float percentual;

    printf("Percentual de Acertos nos Arremessos\n");

    // Solicita o número total de tentativas
    printf("Digite o número total de tentativas: ");
    scanf("%d", &tentativas);

    // Solicita o número total de acertos
    printf("Digite o número total de acertos: ");
    scanf("%d", &acertos);

    if (tentativas > 0) {
        // Calcula o percentual de acertos
        percentual = (float)acertos / tentativas * 100;
        printf("Percentual de acertos: %.2f%%\n", percentual);
    } else {
        printf("O número de tentativas deve ser maior que zero.\n");
    }

    return 0;
}
