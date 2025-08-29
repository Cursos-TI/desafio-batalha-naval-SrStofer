#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros
    int navio1[2] = {3}; // Tamanho do navio 1
    int navio2[2] = {3}; // Tamanho do navio 2
    int i, j;
    int linha, coluna;
    int orientacao; // 0 para horizontal, 1 para vertical
    int valido;
    // Colocação do navio 1
    do {
        valido = 1;
        printf("Digite a linha (0-9) para o navio 1: ");
        scanf("%d", &linha);
        printf("Digite a coluna (0-9) para o navio 1: ");
        scanf("%d", &coluna);
        printf("Digite a orientacao (0 para horizontal, 1 para vertical) para o navio 1: ");
        scanf("%d", &orientacao);
        if (orientacao == 0) { // Horizontal
            if (coluna + navio1[0] > 10) {
                valido = 0; // Fora dos limites
            } else {
                for (j = coluna; j < coluna + navio1[0]; j++) {
                    if (tabuleiro[linha][j] != 0) {
                        valido = 0; // Sobreposição
                        break;
                    }
                }
            }
            if (valido) {
                for (j = coluna; j < coluna + navio1[0]; j++) {
                    tabuleiro[linha][j] = 1; // Marca o navio no tabuleiro
                }
            }
        } else { // Vertical
            if (linha + navio1[0] > 10) {
                valido = 0; // Fora dos limites
            } else {
                for (i = linha; i < linha + navio1[0]; i++) {
                    if (tabuleiro[i][coluna] != 0) {
                        valido = 0; // Sobreposição
                        break;
                    }
                }
            }
            if (valido) {
                for (i = linha; i < linha + navio1[0]; i++) {
                    tabuleiro[i][coluna] = 1; // Marca o navio no tabuleiro
                }
            }
        }
        if (!valido) {
            printf("Posicao invalida para o navio 1. Tente novamente.\n");
        }
    } while (!valido);
    // Colocação do navio 2
    do {
        valido = 1;
        printf("Digite a linha (0-9) para o navio 2: ");
        scanf("%d", &linha);
        printf("Digite a coluna (0-9) para o navio 2: ");
        scanf("%d", &coluna);
        printf("Digite a orientacao (0 para horizontal, 1 para vertical) para o navio 2: ");
        scanf("%d", &orientacao);
        if (orientacao == 0) { // Horizontal
            if (coluna + navio2[0] > 10) {
                valido = 0; // Fora dos limites
            } else {
                for (j = coluna; j < coluna + navio2[0]; j++) {
                    if (tabuleiro[linha][j] != 0) {
                        valido = 0; // Sobreposição
                        break;
                    }
                }
            }
            if (valido) {
                for (j = coluna; j < coluna + navio2[0]; j++) {
                    tabuleiro[linha][j] = 2; // Marca o navio no tabuleiro
                }
            }
        } else { // Vertical
            if (linha + navio2[0] > 10) {
                valido = 0; // Fora dos limites
            } else {
                for (i = linha; i < linha + navio2[0]; i++) {
                    if (tabuleiro[i][coluna] != 0) {
                        valido = 0; // Sobreposição
                        break;
                    }
                }
            }
            if (valido) {
                for (i = linha; i < linha + navio2[0]; i++) {
                    tabuleiro[i][coluna] = 2; // Marca o navio no tabuleiro
                }
            }
        }
        if (!valido) {
            printf("Posicao invalida para o navio 2. Tente novamente.\n");
        }
    } while (!valido);
    // Exibe o tabuleiro
    printf("Tabuleiro:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }           
return 0;    
}
