#include<stdio.h>
#include<string.h>
int main()
{
    char palavra [100];

    printf("Insira a palavra desejada :\n");
    if(!fgets(palavra,sizeof(palavra),stdin))
    {
        printf("Error identificado :\n");

    }

    size_t tamanho = strlen(palavra);

    if( tamanho > 0 && palavra[tamanho -1]==  '\n')
    {
        palavra[tamanho-1] = '\0';
        tamanho--;
    }

    int i= 0;
    while( i < tamanho)
    {
        printf("\n%c",palavra[i]);
        i++;
    }


    return 0 ; 

}