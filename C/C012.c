#include <stdio.h>

int main() {
    int N, num, maior;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido\n");
        return 1;
    }

    printf("Digite %d números inteiros:\n", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (i == 0 || num > maior) {
            maior = num;
        }
    }

    printf("%d\n", maior);

    return 0;
}