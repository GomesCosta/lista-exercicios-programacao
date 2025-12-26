#include <stdio.h>

struct pessoa {
    char nome[50];
    int idade;
    float altura;
    char telefone[15];
} amigos[5];

int main() {
    FILE *arquivo;
    int i;
    
    printf("=== CADASTRO DE 5 AMIGOS ===\n\n");
    
    for (i = 0; i < 5; i++) {
        printf("Amigo %d:\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]", amigos[i].nome);
        
        printf("Idade: ");
        scanf("%d", &amigos[i].idade);
        
        printf("Altura: ");
        scanf("%f", &amigos[i].altura);
        
        printf("Telefone: ");
        scanf(" %[^\n]", amigos[i].telefone);
        
        printf("\n");
    }
    
    // Salvar em arquivo texto
    arquivo = fopen("amigos.txt", "w");
    
    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%s;%d;%.2f;%s\n", 
                amigos[i].nome, 
                amigos[i].idade, 
                amigos[i].altura, 
                amigos[i].telefone);
    }
    
    fclose(arquivo);
    
    printf("Dados salvos no arquivo 'amigos.txt'!\n");
    
    return 0;
}