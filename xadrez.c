#include <stdio.h>

#define MOVER_BISPO 5
#define MOVER_TORRE 5
#define MOVER_RAINHA 8

int main() {
    int i;

    // ===== BISPO =====
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < MOVER_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // ===== TORRE =====
    printf("Movimentação da Torre:\n");
    int t = 0;
    while (t < MOVER_TORRE) {
        printf("Direita\n");
        t++;
    }

    printf("\n");

    // ==== RAINHA ====
    printf("Movimentação da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOVER_RAINHA);

    return 0;
}
