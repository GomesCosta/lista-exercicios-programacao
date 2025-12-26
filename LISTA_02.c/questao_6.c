#include <stdio.h>

int main() {
    int m[2][2] = {1, 2, 3, 4};
    int r[2][2];
    int i, j;
    int maior = m[0][0];

    // Encontrar o maior elemento
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (m[i][j] > maior) {
                maior = m[i][j];
            }
        }
    }

    // Multiplicar cada elemento pelo maior
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            r[i][j] = m[i][j] * maior;
        }
    }

    // Imprimir a matriz resultante
    printf("Matriz R:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}