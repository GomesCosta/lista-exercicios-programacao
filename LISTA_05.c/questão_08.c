/*8. Criar um algoritmo que entre com uma palavra e imprima conforme o exemplo a seguir:
Palavras: TERRA
TERRA
ERRA
RRA
RA
A*/

#include<stdio.h>
#include<string.h>

int  main ()
{
    char palavra [100];

    printf("Insira a palavra desejada :\n");

    if(!fgets(palavra,(sizeof palavra),stdin))
    {
        printf("Erro na leitura do arquivo :");

        return 1 ;
    }

    size_t tamanho = strlen(palavra);
    if( tamanho > 0 && palavra[tamanho - 1 ]=='\n')
    {
        palavra[tamanho -1] = '\0';
        tamanho--;
    }


     printf("\n-----Palvara Modificada-----\n");
    
    for(int i = 0 ; i < tamanho  ; i++)
    {
         printf("\n%s",&palavra[i]);

    }


    return 0;


}
    
       

