#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros
    int navio1[2] = {3,3,3}; // Tamanho do navio 1
    int navio2[2] = {3,3,3}; // Tamanho do navio 2
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1[0]][navio1[1] + i] = 3; // Coloca o navio 1 horizontalmente
        tabuleiro[navio2[1] + i][navio2[2]] = 3; // Coloca o navio 2 verticalmente
    }
    // Imprime o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
return 0;    
}
