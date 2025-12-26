#include<stdio.h>

int verifica_positivo(int num ){

    if (num > 0) 
    {
        return 1 ;
    }

    else
    {
        return 0;
    }
}

int main(){
    int numero;

    printf("Insira um valor \n:");
    scanf("%d",&numero);

    int resultado = verifica_positivo(numero);

    printf("Resultado %d\n",resultado);

    return 0;



}

