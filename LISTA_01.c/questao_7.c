#include<stdio.h>

int main()
{
int cont,num;
int a = 2;
int b = 7;
int c = 3;
printf("digite quantos termos: ");
scanf("%d",&num);
cont = 0;
while(cont < num)
{
if (cont < num)
{
printf("%d ",a);
cont++;
}
if (cont < num)
{
printf("%d ",b);
cont++;
}
if (cont < num)
{
printf("%d ",c);
cont++;
}
a = a * 2;
b = b * 3;
c = c * 4;
}
}