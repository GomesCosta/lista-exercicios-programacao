#include <stdio.h>

int soma_divisiveis(int a, int b, int c) {
    int soma = 0;
    for (int i = b; i <= c; i++) {
        if (i % a == 0)
            soma += i;
    }
    return soma;
}

int main() {
    int a, b, c;
    printf("Digite tres numeros (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    int resultado = soma_divisiveis(a, b, c);
    printf("Soma dos numeros divisiveis por %d entre %d e %d: %d\n", a, b, c, resultado);

    return 0;
}
