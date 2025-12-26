#include <stdio.h>

typedef struct {
    char Nome[40];
    char Sexo;
    int Horas;
} Aluno;

void coletarDados(Aluno a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: "); scanf(" %[^\n]", a[i].Nome);
        printf("Sexo (M/F): "); scanf(" %c", &a[i].Sexo);
        printf("Horas/dia: "); scanf("%d", &a[i].Horas);
    }
}

void mostrarMaisEstudam(Aluno a[], int n) {
    int max = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i].Horas > max) {
            max = a[i].Horas;
        }
    }
    
    printf("\nMais dedicados (%d horas):\n", max);
    for(int i = 0; i < n; i++) {
        if(a[i].Horas == max) {
            printf("%s\n", a[i].Nome);
        }
    }
}

int main() {
    int n;
    printf("Numero de alunos: ");
    scanf("%d", &n);
    
    Aluno alunos[n];
    
    coletarDados(alunos, n);
    mostrarMaisEstudam(alunos, n);
    
    return 0;
}