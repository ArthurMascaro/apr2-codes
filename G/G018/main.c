#include <stdio.h>
#include "fatorial.h"

int main() {
    int N;
    unsigned long long soma = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        soma += fatorial(i);
    }

    printf("%llu\n", soma);

    return 0;
}