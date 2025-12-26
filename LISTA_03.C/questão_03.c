#include <stdio.h>

int main() {
    int matriculas[1000];
    char tipos[1000];
    char socios[1000];
    float valores[1000];
    int i = 0;
    char continuar = 'S';

    int contA = 0, contB = 0, contC = 0, contD = 0;
    float total = 0;

    while((continuar == 'S' || continuar == 's') && i < 1000) {
        printf("\nAluno %d:\n", i + 1);
        printf("Numero da matricula: ");
        scanf("%d", &matriculas[i]);
        printf("Tipo de participacao (A, B, C ou D): ");
        scanf(" %c", &tipos[i]);
        printf("Socio da SBC (S/N): ");
        scanf(" %c", &socios[i]);

        if(tipos[i] == 'A' || tipos[i] == 'a') {
            valores[i] = 30;
            contA++;
        } else if(tipos[i] == 'B' || tipos[i] == 'b') {
            valores[i] = 60;
            contB++;
        } else if(tipos[i] == 'C' || tipos[i] == 'c') {
            valores[i] = 90;
            contC++;
        } else {
            valores[i] = 100;
            contD++;
        }

        if(socios[i] == 'S' || socios[i] == 's') {
            valores[i] = valores[i] / 2;
        }

        printf("Valor a pagar: R$%.2f\n", valores[i]);

        total += valores[i];
        i++;

        printf("\nDeseja cadastrar outro aluno? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("\n--- RESUMO FINAL ---\n");
    printf("Total arrecadado: R$%.2f\n", total);
    printf("Participantes tipo A: %d\n", contA);
    printf("Participantes tipo B: %d\n", contB);
    printf("Participantes tipo C: %d\n", contC);
    printf("Participantes tipo D: %d\n", contD);

    return 0;
}
