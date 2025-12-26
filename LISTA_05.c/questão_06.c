#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];

    printf("Qual sera a palavra desejada:\n");
    if (!fgets(palavra, sizeof(palavra), stdin))

    {
        printf("Erro na leitura do arquivo.\n");
        return 1;
    }

    size_t tamanho = strlen(palavra);

   
    if (tamanho > 0 && palavra[tamanho - 1] == '\n')
    {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    
    for (int i = tamanho; i > 0; i--)
    {
        palavra[i] = '\0';  
        printf("%s\n", palavra);
    }

    return 0;
}
