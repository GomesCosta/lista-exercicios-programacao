/*#include <stdio.h>

int main() {
    int mat[15][5];
    int i, j, k, l;
    int jaContado[15][5] = {0}; // controle para não repetir

    // leitura da matriz
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nElementos repetidos:\n");
    for (i = 0; i < 15; i++) {
        for (j = 0; j < 5; j++) {
            if (jaContado[i][j] == 1) continue; // já marcado

            int atual = mat[i][j];
            int cont = 0;

            // conta ocorrências do número na matriz
            for (k = 0; k < 15; k++) {
                for (l = 0; l < 5; l++) {
                    if (mat[k][l] == atual) {
                        cont++;
                        jaContado[k][l] = 1; // marca como já contado
                    }
                }
            }

            if (cont > 1) {
                printf("Número %d aparece %d vezes\n", atual, cont);
            }
        }
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int matriz [15][5];
    int jacontado[15][5] = {0};
    int i , j , k , l;

    for( i = 0 ; i < 15 ; i ++)
    {
        for( j = 0 ; j < 5 ; j ++)
        {
            printf("mat[%d][%d]:", i, j);
        }
    }

    for(i = 0 ; i < 15 ; i++ )
    {
        for( j = 0 ; j < 5 ; j++)
        {
            if (jacontado[i][j] == 1 )
        }
    }


}