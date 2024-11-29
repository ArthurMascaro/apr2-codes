#include <stdio.h>

int main() {
    int N, soma = 0;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    while (N > 0) {
        soma += N % 10;
        N /= 10;
    }

    printf("%d\n", soma);

    return 0;
}