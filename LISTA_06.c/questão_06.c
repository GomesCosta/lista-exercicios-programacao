#include <stdio.h>

int main() {
    FILE *entrada = fopen("amigos.txt", "r");
    FILE *saida = fopen("formatado.txt", "w");
    
    char nome[50];
    int idade;
    float altura;
    char telefone[15];
    
    // Ler cada amigo e formatar
    while (fscanf(entrada, " %[^;];%d;%f;%s", nome, &idade, &altura, telefone) == 4) {
        fprintf(saida, "--------\n");
        fprintf(saida, "%s tem %d anos e %.2f de altura.\n", nome, idade, altura);
        fprintf(saida, "Tel.: %s.\n\n", telefone);
    }
    
    fclose(entrada);
    fclose(saida);
    
    printf("Arquivo formatado.txt criado!\n");
    
    return 0;
}