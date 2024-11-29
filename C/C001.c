#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            printf("%d\n", i);
        }
    } else {
        printf("Numero invalido\n");
    }

    return 0;
}