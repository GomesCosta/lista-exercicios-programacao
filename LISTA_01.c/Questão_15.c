#include <stdio.h>

int main() {
    int N, i;
    int a = 0, b = 1, c;

    printf("Digite N: ");
    scanf("%d", &N);

    printf("Os %d primeiros termos da sequência de Fibonacci:\n", N);

    for (i = 1; i <= N; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    

    return 0;
}