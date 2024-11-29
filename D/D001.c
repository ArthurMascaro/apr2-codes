#include <stdio.h>

int main() {
    float temperaturas[7], soma = 0.0, media;
    int acima_da_media = 0;

    printf("Digite as temperaturas durante a semana (7 leituras):\n");
    for (int i = 0; i < 7; i++) {
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 7;

    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] > media) {
            acima_da_media++;
        }
    }

    printf("%d\n", acima_da_media);

    return 0;
}