#include <stdio.h>

int main() {
    int notas[10][3];
    int contagem[4] = {0, 0, 0, 0}; // contagem[1], [2], [3] serão usadas

    // 1. Ler notas dos alunos
    for (int aluno = 0; aluno < 10; aluno++) {
        printf("Digite as 3 notas do aluno %d:\n", aluno + 1);
        for (int prova = 0; prova < 3; prova++) {
            scanf("%d", &notas[aluno][prova]);
        }
    }

    // 2. Verificar menor nota de cada aluno
    for (int aluno = 0; aluno < 10; aluno++) {
        int menorNota = notas[aluno][0];
        int provaMenor = 1; // inicializa como prova 1

        for (int prova = 1; prova < 3; prova++) {
            if (notas[aluno][prova] < menorNota) {
                menorNota = notas[aluno][prova];
                provaMenor = prova + 1; // +1 porque queremos mostrar 1,2,3
            }
        }

        // Imprimir relatório do aluno
        printf("Aluno %d teve menor nota na prova %d\n", aluno + 1, provaMenor);

        // Atualizar contagem
        contagem[provaMenor]++;
    }

    // 3. Mostrar quantos alunos tiveram menor nota em cada prova
    for (int prova = 1; prova <= 3; prova++) {
        printf("Número de alunos com menor nota na prova %d: %d\n", prova, contagem[prova]);
    }

    return 0;
}
