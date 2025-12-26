#include <stdio.h>

int main() {
    char nomes[15][50], telefones[15][20];
    float precos[15];
    float soma = 0, media;
    int i;

    printf("=== Cadastro de 15 lojas ===\n");

    for(i = 0; i < 15; i++) {
        printf("\nLoja %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Telefone: ");
        scanf("%s", telefones[i]);
        printf("Preco: ");
        scanf("%f", &precos[i]);
        soma += precos[i];
    }

    media = soma / 15;

    printf("\nMedia dos precos: %.2f\n", media);
    printf("\n--- Lojas com preco abaixo da media ---\n");

    for(i = 0; i < 15; i++) {
        if(precos[i] < media) {
            printf("%s - Telefone: %s - Preco: %.2f\n", nomes[i], telefones[i], precos[i]);
        }
    }

    return 0;
}
