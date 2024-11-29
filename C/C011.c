#include <stdio.h>

int main() {
    int X, num, count = 0;

    printf("Digite um número inteiro e positivo X: ");
    scanf("%d", &X);

    printf("Digite uma sequência de números inteiros positivos (um número negativo para terminar):\n");

    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        if (num == X) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}