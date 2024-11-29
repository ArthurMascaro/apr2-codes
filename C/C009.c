#include <stdio.h>

int main() {
    int N;
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido\n");
        return 1;
    }

    unsigned long long fib1 = 1, fib2 = 1, fib_next;

    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%llu", fib1);
        } else if (i == 2) {
            printf(" %llu", fib2);
        } else {
            fib_next = fib1 + fib2;
            printf(" %llu", fib_next);
            fib1 = fib2;
            fib2 = fib_next;
        }
    }
    printf("\n");

    return 0;
}