#include <stdio.h>

int main() {
    int time, jogador;
    int idade, menores18 = 0, mais80kg = 0, totalJogadores = 0;
    float peso, altura;
    float somaAlturasCampeonato = 0;

    for (time = 1; time <= 5; time++) {
        int somaIdadesTime = 0;
        float somaAlturasTime = 0;

        for (jogador = 1; jogador <= 11; jogador++) {
            printf("Time %d - Jogador %d (idade peso altura): ", time, jogador);
            scanf("%d %f %f", &idade, &peso, &altura);

            somaIdadesTime += idade;
            somaAlturasTime += altura;

            if (idade < 18) {
                menores18++;
            }
            if (peso > 80) {
                mais80kg++;
            }

            somaAlturasCampeonato += altura;
            totalJogadores++;
        }

        printf("\nTime %d - Média das idades: %.2f\n", time, somaIdadesTime / 11.0);
        printf("Time %d - Média das alturas: %.2f\n\n", time, somaAlturasTime / 11.0);
    }

    printf("\nQuantidade de jogadores com idade < 18: %d\n", menores18);
    printf("Média das alturas do campeonato: %.2f\n", somaAlturasCampeonato / totalJogadores);
    printf("Porcentagem de jogadores > 80kg: %.2f%%\n", (mais80kg * 100.0) / totalJogadores);

    return 0;
}