#include <stdio.h>

int main() {
    int N;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }

    printf("%llu\n", fatorial);

    return 0;
}