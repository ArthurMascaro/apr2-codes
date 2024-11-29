#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N, sum = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}