#include <stdio.h>

int main()
{
    int i;
    float nota1, nota2, media;
    int aprov = 0, exame = 0, reprov = 0;
    float somaMedias = 0;

    for (i = 1; i <= 6; i++)
    {
        printf("Digite as duas notas do aluno %d: ", i);
        scanf("%f %f", &nota1, &nota2);

        media = (nota1 + nota2) / 2.0;
        printf("Media do aluno %d = %.2f\n", i, media);

        if (media <= 3)
        {
            printf("Reprovado\n");
            reprov++;
        }
        else if (media < 7)
        {
            printf("Exame\n");
            exame++;
        }
        else
        {
            printf("Aprovado\n");
            aprov++;
        }

        somaMedias += media;
    }

    printf("\nTotal aprovados: %d\n", aprov);
    printf("Total exame: %d\n", exame);
    printf("Total reprovados: %d\n", reprov);
    printf("Média da classe: %.2f\n", somaMedias / 6);

    return 0;
}


