#include <stdio.h>
int total_segundos;

void converter_tempo(int *horas, int *minutos, int *segundos) {
    *horas = total_segundos / 3600; // total de segundos em 1 hr
    *minutos = (total_segundos % 3600) / 60;
    *segundos = total_segundos % 60;
}

int main(){
    int h, m, s;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);

    converter_tempo(&h, &m, &s);

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", total_segundos, h, m, s);

    return 0;
}


