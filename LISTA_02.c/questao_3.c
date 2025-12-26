
#include <stdio.h>

#define TAM 10

int existe(int vet[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] == valor)
            return 1;
    }
    return 0;
}

int main() {
    int X[TAM] = {3, 8, 4, 2, 1, 6, 8, 7, 11, 9};
    int Y[TAM] = {2, 1, 5, 12, 3, 0, 1, 4, 5, 6};

    // União
    int uniao[2 * TAM], tamUniao = 0;
    for (int i = 0; i < TAM; i++) {
        if (!existe(uniao, tamUniao, X[i]))
            uniao[tamUniao++] = X[i];
    }
    for (int i = 0; i < TAM; i++) {
        if (!existe(uniao, tamUniao, Y[i]))
            uniao[tamUniao++] = Y[i];
    }

    // Diferença X - Y
    int diferenca[TAM], tamDif = 0;
    for (int i = 0; i < TAM; i++) {
        if (!existe(Y, TAM, X[i]) && !existe(diferenca, tamDif, X[i]))
            diferenca[tamDif++] = X[i];
    }

    // Soma e Produto
    int soma[TAM], produto[TAM];
    for (int i = 0; i < TAM; i++) {
        soma[i] = X[i] + Y[i];
        produto[i] = X[i] * Y[i];
    }

    // Interseção
    int interseccao[TAM], tamInt = 0;
    for (int i = 0; i < TAM; i++) {
        if (existe(Y, TAM, X[i]) && !existe(interseccao, tamInt, X[i]))
interseccao[tamInt++] = X[i];
    }

    // Exibição
    printf("Uniao: ");
    for (int i = 0; i < tamUniao; i++)
        printf("%d ", uniao[i]);

    printf("\nDiferenca: ");
    for (int i = 0; i < tamDif; i++)
        printf("%d ", diferenca[i]);

    printf("\nSoma: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", soma[i]);

    printf("\nProduto: ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", produto[i]);

    printf("\nInterseccao: ");
    for (int i = 0; i < tamInt; i++)
        printf("%d ", interseccao[i]);

    return 0;
}