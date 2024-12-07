#include <stdio.h>

void conversorAltura() {
    float polegadas, centimetros;

    printf("Conversor de Altura do Jogador\n");
    printf("Digite a altura do jogador em polegadas: ");
    scanf("%f", &polegadas);

    // 1 polegada equivale a 2.54 centímetros
    centimetros = polegadas * 2.54;

    printf("A altura do jogador é: %.2f cm\n", centimetros);
}