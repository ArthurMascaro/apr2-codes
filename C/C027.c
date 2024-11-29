#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            soma += i;
        }
    }

    if (soma == N) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}