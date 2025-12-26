#include <stdio.h>

int main() {
    int vetor[9];
    int i, j, primo;
    
    printf("Digite 9 numeros inteiros:\n");
    for (i = 0; i < 9; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Verificação e saída
    printf("\nNumeros primos e suas posicoes:\n");
    for (i = 0; i < 9; i++) {
        if (vetor[i] < 2) {
            continue; // menores que 2 não são primos
        }

        primo = 1; // começa assumindo que é primo
        for (j = 2; j <= vetor[i] / 2; j++) {
            if (vetor[i] % j == 0) {
                primo = 0; // achou divisor, não é primo
                break;
            }
        }

        if (primo == 1) {
            printf("Numero %d na posicao %d\n", vetor[i], i);
        }
    }

    return 0;
}
