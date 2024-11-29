#include <stdio.h>

int main() {
    int N, is_prime = 1;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= N / 2; i++) {
            if (N % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("%d\n", is_prime);

    return 0;
}