#include "Algoritmos/algoritmo.h"
#include "Estruturas de Controle/estruturaDeControle.h"
#include "Operadores e Tipos de Dados/operadoresDados.h"
#include "Vetores e Matrizes/vetorMatriz.h"
#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("\nMenu:\n");
        printf("1. Conversor de Altura (Algoritmos)\n");
        printf("2. Média de Pontos (Estruturas de Controle)\n");
        printf("3. Percentual de Acertos (Estruturas de Controle)\n");
        printf("4. Estatísticas de Jogadores (Vetores/Matrizes)\n");
        printf("5. Pontos por Jogo (Vetores/Matrizes)\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                conversorAltura();
                break;
            case 2:
                mediaPontos();
                break;
            case 3:
                percentualAcertos();
                break;
            case 4:
                estatisticasJogadores();
                break;
            case 5:
                pontosJogos();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (escolha != 0);

    return 0;
}