#include <stdio.h>

int main() {
    int N, i, par = 2;

    printf("Digite N: ");
    scanf("%d", &N);

    printf("Os %d primeiros números pares:\n", N);
    for (i = 1; i <= N; i++) {
        printf("%d ", par);
        par += 2;
    }
    printf("\n");

    return 0;
}