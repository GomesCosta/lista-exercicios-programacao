#include <stdio.h>

int main() {
    int vet[18];
    int mat[3][6];
    int i, j, k = 0;

    // leitura do vetor
    for (i = 0; i < 18; i++) {
        printf("vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    // distribui na matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            mat[i][j] = vet[k];
            k++;
        }
    }

    // mostra matriz
    printf("\nMatriz 3x6:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}