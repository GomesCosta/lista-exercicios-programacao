#include<stdio.h>
int main()
{
    int num,i;
    printf("\n==========TABUADA==========\n");
    printf("\ndigite um numero:\n");
    scanf("%d",&num);

    for (i = 0; i <= 10; i++ )
    {
        printf("\n %d x %d = %d \n",num,i,num*i);
    }
}