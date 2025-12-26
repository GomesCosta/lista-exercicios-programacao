#include <stdio.h>

int main() {
    int N, i;
    long long fatorial = 1; // usar long long para não estourar fácil

    printf("Digite N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", N, fatorial);

    return 0;
}