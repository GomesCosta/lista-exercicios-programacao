#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100];
    
    printf("Digite um nome: ");

    // leitura correta
    if (!fgets(nome, sizeof(nome), stdin))
    {
        printf("Erro na leitura!\n");
        return 1;
    }

    // remove o ENTER
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);

    
    printf("(a) %s\n", nome);

    
    if (tamanho >= 1)
        printf("(b) %c\n", nome[0]);
    else
        printf("(b) Nome vazio\n");

  
    if (tamanho >= 3)
        printf("(c) %.3s\n", nome);
    else
        printf("(c) %s\n", nome);


    if (tamanho >= 4)
        printf("(d) %c\n", nome[3]);
    else
        printf("(d) Não existe quarto caractere\n");

    
    if (tamanho >= 2)
        printf("(e) %s\n", nome + 1);
    else
        printf("(e) Não há como remover o primeiro caractere\n");

    
    if (tamanho >= 2)
        printf("(f) %c%c\n", nome[tamanho - 2], nome[tamanho - 1]);
    else if (tamanho == 1)
        printf("(f) %c\n", nome[0]);
    else
        printf("(f) Nome vazio\n");

    return 0;
}
