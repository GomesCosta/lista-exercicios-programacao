#include <stdio.h>

/*int main() {
    int mat[10][3];
    int somaLinha[10];
    int i, j;

    // leitura da matriz
    for (i = 0; i < 10; i++) {
        somaLinha[i] = 0;
        for (j = 0; j < 3; j++) {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            somaLinha[i] += mat[i][j];
        }
    }

    // multiplicação de cada elemento pela soma da linha
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            mat[i][j] *= somaLinha[i];
        }
    }

    // mostra matriz resultante
    printf("\nMatriz resultante:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int mat [10][3];
    int vet_soma_linha [10];
    int i,j;


    for(i = 0 ; i < 10;i++)
    {
        vet_soma_linha[i] = 0;

         for(j=0 ; j < 3 ; j ++)
    {
        printf("Digite mat[%d][%d]: ",i,j);
        scanf("%d",&mat[i][j]);

        vet_soma_linha[i] = vet_soma_linha[i] + mat[i][j];
    }
    }

    for(i = 0 ; i < 10 ; i++)
    {
        for(j = 0 ; j < 3 ; j ++)
        {
            mat[i][j] = mat[i][j] * vet_soma_linha[i] ;
        }
    }

    printf("Matriz resultante :\n");
    for(i = 0 ; i <10 ; i++){
        for(j = 0 ; j < 3 ; j ++)
        {
            printf("%5d",mat[i][j]);

        }

        printf("\n");
    }

   
    return 0;
}