#include <stdio.h>
int main()
{
    int n,l,i;
    int j = 1;
    int fat = 1;
    printf("digite um numero: \n");
    scanf("%d",&n);
    while(j <= n)
    {
        printf("\n digite um numero: ");
        scanf("%d",&l);
        j+=1;
     for (i = 1; i <= l; i++)
    {
        fat = fat*i;
    }
    printf("fatorial de %d = %d",l,fat);
    fat = 1;
    }
}