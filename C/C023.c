#include <stdio.h>

int main() {
    int A, altura, max_altura = 0, count = 0;

    printf("Digite a idade da sua sobrinha: ");
    scanf("%d", &A);

    printf("Digite as alturas das velas:\n");

    for (int i = 0; i < A; i++) {
        scanf("%d", &altura);
        if (altura > max_altura) {
            max_altura = altura;
            count = 1;
        } else if (altura == max_altura) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}