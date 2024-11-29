#include <stdio.h>

int main() {
    int S, dias, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &S);

    dias = S / 86400;
    S = S % 86400;
    horas = S / 3600;
    S = S % 3600;
    minutos = S / 60;
    segundos = S % 60;

    printf("%d dias, %d horas, %d minutos, %d segundos\n", dias, horas, minutos, segundos);

    return 0;
}