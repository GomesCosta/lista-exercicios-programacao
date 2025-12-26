#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];

    printf("Insira a palavra desejada:\n");

    if (!fgets(palavra, sizeof(palavra), stdin))
    {
        printf("Erro na leitura.\n");
        return 1;
    }

    size_t tamanho = strlen(palavra);

    // Remover o \n
    if (tamanho > 0 && palavra[tamanho - 1] == '\n')
    {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%s\n", &palavra[i]);
    }

    return 0;
}

