#include <stdio.h>

int main() {
    int N, original, reversed = 0, remainder;

    printf("Digite um número inteiro não negativo N: ");
    scanf("%d", &N);

    original = N;

    while (N != 0) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    }

    if (original == reversed) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}