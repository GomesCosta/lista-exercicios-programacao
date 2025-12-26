#include <stdio.h>
int somaNum (int n1, int n2){
    int i, soma;
    for( i= n1; i<=n2; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int n1, n2;
    int N;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);  
    printf("Entre com o segundo numero: ");
    scanf("%d", &n2);  

    N = somaNum(n1, n2);

    printf("O resultado da soma eh: %d", N);

    return 0;
}