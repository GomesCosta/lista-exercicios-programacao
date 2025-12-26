#include <stdio.h>
int main()
{
    int i,n = 20;
    int v1[10] = {1,3,5,7,9,11,13,15,17,19};
    int v2[10] = {2,4,6,8,10,12,14,16,18,20};
    int v3[2*n];
    
    for (i = 0; i<n; i++)
    {
        v3[2*i] = v1[i];
        v3[2*i +1 ] = v2[i];  
    }
    for (i = 0; i<n; i++)
    {
        printf("%d ",v3[i]);
    }
}