#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i;
    }

    printf("Soma de 1 até %d = %d\n", N, soma);

    return 0;
}
