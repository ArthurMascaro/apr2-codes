#include <stdio.h>

int main() {
    int eleitores, brancos, nulos, validos;
    float perc_brancos, perc_nulos, perc_validos, perc_ausentes;

    printf("Digite o numero de eleitores: ");
    scanf("%d", &eleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &brancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite o numero de votos validos: ");
    scanf("%d", &validos);

    perc_brancos = (brancos / (float)eleitores) * 100;
    perc_nulos = (nulos / (float)eleitores) * 100;
    perc_validos = (validos / (float)eleitores) * 100;
    perc_ausentes = ((eleitores - (brancos + nulos + validos)) / (float)eleitores) * 100;

    printf("Nulos: %.2f%%\n", perc_nulos);
    printf("Brancos: %.2f%%\n", perc_brancos);
    printf("Validos: %.2f%%\n", perc_validos);
    printf("Ausentes: %.2f%%\n", perc_ausentes);

    return 0;
}