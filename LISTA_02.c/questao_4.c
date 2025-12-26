#include <stdio.h>
int main ()
{
    int vetor[10];
    int i,j,aux;
    for (i = 0; i<10; i ++)
    {
        printf("digite um numero para pos %d: ",i);
        scanf("%d",&vetor[i]);
    }
    for (i = 0; i < 10 ; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) { // troca se o atual for menor
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    // Mostrar resultado
    printf("Vetor em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}