#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("MDC: %d\n", a);

    return 0;
}