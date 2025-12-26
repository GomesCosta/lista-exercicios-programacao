#include<stdio.h>
int main()
{
    int i;
    float salario = 1000;
    float percentual = 0.015;
    float aumento;
    printf("salario 2005 = %f",salario);
    
    for (i = 2006; i <= 2025; i++)
    {
        aumento = salario*percentual;
        percentual*=2;
        salario = aumento+salario;
        printf("\n salario em %d é de %.2f \n",i,salario);
    }
}