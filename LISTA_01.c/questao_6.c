#include <stdio.h>
int main()
{
    int a = 0;  
    int b = 1;
    int seg,i;
    for (i = 0; i <=10; i++)
    {
        printf("%d ",a);
        seg = a;
        a = b;
        b = seg + b;
    }
}
