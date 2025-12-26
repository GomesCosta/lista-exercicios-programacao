#include <stdio.h>

int main() {
    int M[10][10];
    int i, j, temp;

    // leitura da matriz
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // (a) troca linha 2 com linha 8
    for (j = 0; j < 10; j++) {
        temp = M[1][j];
        M[1][j] = M[7][j];
        M[7][j] = temp;
    }

    // (b) troca coluna 4 com coluna 10
    for (i = 0; i < 10; i++) {
        temp = M[i][3];
        M[i][3] = M[i][9];
        M[i][9] = temp;
    }

    // (c) troca diagonal principal com secundária
    for (i = 0; i < 10; i++) {
        temp = M[i][i];
        M[i][i] = M[i][9 - i];
        M[i][9 - i] = temp;
    }

    // (d) troca linha 5 com coluna 10
    for (i = 0; i < 10; i++) {
        temp = M[4][i];
        M[4][i] = M[i][9];
        M[i][9] = temp;
    }

    // mostra matriz resultante
    printf("\nMatriz resultante:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%5d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}