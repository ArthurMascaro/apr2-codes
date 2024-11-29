#include <stdio.h>

int main() {
    int N, found = 0;

    printf("Digite um número inteiro não negativo N: ");
    scanf("%d", &N);

    for (int i = 1; i * (i + 1) * (i + 2) <= N; i++) {
        if (i * (i + 1) * (i + 2) == N) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}