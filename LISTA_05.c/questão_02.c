#include <stdio.h>
#include <string.h>

int main() {

    char palavra[100];
    char nova[100];

    printf("Insira a palavra desejada:\n");

    if (!fgets(palavra, sizeof(palavra), stdin)) {
        printf("Erro na leitura.\n");
        return 1;
    }

    // Remover o \n do final
    size_t tamanho = strlen(palavra);
    if (tamanho > 0 && palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    if (tamanho == 0) {
        printf("Palavra vazia!\n");
        return 0;
    }

    char primeiro = palavra[0];


    if (primeiro == 'L' || primeiro == 'l' || primeiro == 'D' || primeiro == 'd') 
    {
            // CASO 1 — 
            
        nova[0] = palavra[0];          
        nova[1] = palavra[1];          
        nova[2] = palavra[tamanho - 1]; 
        nova[3] = '\0';               
    }
    
    else
    {
        // CASO 2 

        int j = 0;
        for (int i = 1; i < tamanho; i++) {
            nova[j] = palavra[i];
            j++;
        }
        nova[j] = '\0';
    }

    printf("Nova palavra: %s\n", nova);

    return 0;
}
