#include<stdio.h>
#include<string.h>

int main()
{
   char palavra [100];

   printf("Qual sera a palavra desejada ?\n");
   if(!fgets(palavra,sizeof(palavra),stdin));
   printf("Erro na leitura do arquivo :\n");

  size_t tamanho = strlen(palavra);
  if( tamanho > 0 && palavra[tamanho - 1 ] == '\n')
  {
    palavra[tamanho - 1 ] ='\0';
    tamanho --;

  }

int i = 0;
    while (i < tamanho)
    {
        int j = 0;
        while (j <= i)
        {
            printf("%c", palavra[j]);
            j++;
        }
        printf("\n");
        i++;
    }

  return 0;
}
