#include <stdio.h>

float percentual_acrescimo(float antigo, float atual) {
    return ((atual - antigo) / antigo) * 100;
}

int main() {
    float antigo, atual;
    printf("Digite o valor antigo e o valor atual: ");
    scanf("%f %f", &antigo, &atual);

    float perc = percentual_acrescimo(antigo, atual);
    printf("Percentual de acrescimo: %.2f%%\n", perc);

    return 0;
}
