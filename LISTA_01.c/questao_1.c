#include <stdio.h>

int main() {
    int A, B, I, J;

    // leitura inicial
    scanf("%d", &A);

    do {
        // laço principal
        for (I = 1; I <= A; I++) {
            J = I;
            while (J <= A) {
                printf("%d ", J);
                J = J + 1;
            }
            printf("\n"); // para organizar a saída em linhas
        }

        B = A;
        scanf("%d", &A);

    } while ((A != B) && (A > 0));

    return 0;
}