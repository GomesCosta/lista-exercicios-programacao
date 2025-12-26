#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[100];
    int tamanho;

    printf("Qual sera a palavra desejada ?\n");
    if (!fgets(palavra, sizeof(palavra), stdin))
    {
        printf("Erro na leitura do arquivo :\n");
        return 1;
    }

    tamanho = strlen(palavra);

    // remover o '\n'
    if (tamanho > 0 && palavra[tamanho - 1] == '\n')
    {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("Palavra invertida:\n");
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }

    return 0;
}
