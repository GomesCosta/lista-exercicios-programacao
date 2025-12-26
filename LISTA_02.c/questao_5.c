#include <stdio.h>

int main() {
    int vetor[12];
    int i;
    int menor = 1000;
    int maior = -1000;
    int mesMaior = 0, mesMenor = 0;

    // vetor de strings com os nomes dos meses
    char *meses[12] = {
        "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    for (i = 0; i < 12; i++) {
        printf("Temperatura do mes %s: ", meses[i]);
        scanf("%d", &vetor[i]);

        if (vetor[i] < menor) {
            menor = vetor[i];
            mesMenor = i;
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
            mesMaior = i;
        }
    }

    printf("\nTemperatura mais baixa: %d C° em %s", menor, meses[mesMenor]);
    printf("\nTemperatura mais alta: %d C° em %s\n", maior, meses[mesMaior]);

    return 0;
}
