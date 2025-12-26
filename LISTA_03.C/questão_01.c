#include <stdio.h>

int main() {
    char nomes[40][50];
    int dias[40], meses[40];
    int i, mes_consulta;

    // Leitura dos dados
    printf("=== Cadastro de 40 pessoas ===\n");
    for(i = 0; i < 40; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Dia do aniversario: ");
        scanf("%d", &dias[i]);
        printf("Mes do aniversario: ");
        scanf("%d", &meses[i]);
    }

    // Consulta
    printf("\nDigite o mes que deseja consultar (1 a 12): ");
    scanf("%d", &mes_consulta);

    printf("\n--- Aniversariantes do mes %d ---\n", mes_consulta);
    int encontrou = 0;

    for(i = 0; i < 40; i++) {
        if(meses[i] == mes_consulta) {
            printf("%s - Dia %d\n", nomes[i], dias[i]);
            encontrou = 1;
        }
    }

    if(!encontrou) {
        printf("Nenhum aniversariante neste mes.\n");
    }

    return 0;
}
