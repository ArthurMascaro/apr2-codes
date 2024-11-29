#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

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