#include <stdio.h>

int main() {
    int X, Y;

    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    if (X > Y) {
        printf("INVALIDO\n");
    } else {
        for (int i = X; i <= Y; i++) {
            printf("%d\n", i);
        }
        for (int i = Y; i >= X; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}