#include <stdio.h>

void decimalParaBinario(int N) {
    if (N == 0) {
        printf("0");
        return;
    }

    int binario[32];
    int i = 0;

    while (N > 0) {
        binario[i] = N % 2;
        N = N / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}

int main() {
    int N;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Número inválido\n");
        return 1;
    }

    decimalParaBinario(N);
    printf("\n");

    return 0;
}