/*#include <stdio.h>

int main() {
    int A[4][5], B[5][2], C[4][2];
    int i, j, k;

    // leitura da matriz A
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // leitura da matriz B
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // cálculo do produto C = A × B
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 5; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // exibe resultado
    printf("\nMatriz resultante C (4x2):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;*/

#include<stdio.h>
int main(){

    int A [4][5] , B [5][2], C[4][2];
    int i,j,k;

    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0 ; j < 5 ; j ++)
        {
            printf("A [%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for( i = 0 ; i < 5 ; i++)
    {
        for ( j = 0 ; j < 2 ; j++)
        {
            printf("B [%d][%d]:",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 2 ; j ++)
        {
            C[i][j]= 0;
            for(k = 0; k < 5 ; k ++)
            {
                C[i][j] = C[i][j] + A[i][j] * B[i][j];
            }
        }
    }
    
    printf("\nMatriz resultante C (4x2):\n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
        printf("%5d ", C[i][j]);
    }
    printf("\n");
}

}
