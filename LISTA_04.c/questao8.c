#include <stdio.h>

void elemntos(int vet[], int n, int *maior, int *menor){
    int i;
    *maior = vet[0];
    *menor = vet[0];
    for (i=0; i<n; i++){
        if ( vet[i] > *maior){
            *maior = vet[i];
        }
        if ( vet[i] < *menor){
            *menor = vet[i];
        }
    }
}

int main(){
    int vet[5], i;
    int ma, me;
    for (i=0; i<5; i++){
        printf("Insira o termo %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    elemntos(vet, 5, &ma, &me);

    printf("O maior valor eh %d e o menor eh %d", ma, me);

    return 0;
}