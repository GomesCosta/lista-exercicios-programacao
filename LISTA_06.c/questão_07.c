#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char nome[50];
    float nota1, nota2;
    
    // Criar arquivo de entrada
    entrada = fopen("notas.txt", "w");
    fprintf(entrada, "zesa; 10.0; 9.0;\n");
    fprintf(entrada, "antonio silva; 9.0; 7.0;\n");
    fprintf(entrada, "maria; 4.0; 5.0;\n");
    fprintf(entrada, "joao; 6.0; 7.0;\n");
    fclose(entrada);
    
    // Ler entrada e criar saída
    entrada = fopen("notas.txt", "r");
    saida = fopen("resultados.txt", "w");
    
    while (fscanf(entrada, "%[^;]; %f; %f;", nome, &nota1, &nota2) == 3) {
        float media = (nota1 + nota2) / 2;
        fprintf(saida, "%s %.1f %.1f %.1f %s\n", 
                nome, nota1, nota2, media, 
                media >= 5.0 ? "aprovado" : "reprovado");
    }
    
    fclose(entrada);
    fclose(saida);
    
    printf("Arquivos criados: notas.txt e resultados.txt\n");
    
    return 0;
}