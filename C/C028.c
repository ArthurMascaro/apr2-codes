#include <stdio.h>

int main() {
    int N;

    printf("Digite a quantidade de números no conjunto: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido\n");
        return 1;
    }

    int numeros[N];
    printf("Digite os números do conjunto:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }

    int max_segmento = 1, segmento_atual = 1;

    for (int i = 1; i < N; i++) {
        if (numeros[i] >= numeros[i - 1]) {
            segmento_atual++;
        } else {
            if (segmento_atual > max_segmento) {
                max_segmento = segmento_atual;
            }
            segmento_atual = 1;
        }
    }

    if (segmento_atual > max_segmento) {
        max_segmento = segmento_atual;
    }

    printf("%d\n", max_segmento);

    return 0;
}