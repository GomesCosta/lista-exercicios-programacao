#include <stdio.h>

float media(float n1, float n2, float n3, char tipo){
    float result;

    if (tipo == 'A' || tipo == 'a'){
        result = (n1 + n2 + n3) / 3.0;
    }
    else if (tipo == 'P' || tipo == 'p'){
        result = (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    }
    else{
        printf("Tipo de media invalido\n");
        return -1;
    }

    return result;
}

int main(){
    float n1, n2, n3, result;
    char tipo;

    printf("Insira as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Insira A para media aritmetica e P para media ponderada: ");
    scanf(" %c", &tipo);

    result = media(n1, n2, n3, tipo);

    if (result != -1){
        printf("O resultado da media eh: %.1f\n", result);
    }
    return 0;
}