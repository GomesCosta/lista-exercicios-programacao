#include <stdio.h>

int duracao_jogo(int h1, int m1, int h2, int m2) {
    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;

    int duracao = fim - inicio;
    if (duracao < 0)
        duracao += 24 * 60; // passou da meia-noite

    return duracao;
}

int main() {
    int h1, m1, h2, m2;
    printf("Hora de inicio (h m): ");
    scanf("%d %d", &h1, &m1);
    printf("Hora de termino (h m): ");
    scanf("%d %d", &h2, &m2);

    int total = duracao_jogo(h1, m1, h2, m2);
    printf("Duracao do jogo: %d minutos\n", total);

    return 0;
}
