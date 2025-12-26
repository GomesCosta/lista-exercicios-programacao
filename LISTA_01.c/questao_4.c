#include <stdio.h>
int main()
{
    int n, i;
    int fat = 1;
    float e =1.0 ;

    printf("digite um numero: ");
    scanf("%d",&n);
    if (n < 0 )
    {
        printf("numero invalido (negativo)");
    }
 else {

    for (i = 1; i <= n; i++)
    {
        fat = fat*i;
        e = e + 1.0/fat;
    }
     printf("%f",e);
}
}