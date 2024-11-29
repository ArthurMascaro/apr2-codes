#include <stdio.h>

int multiply(int x, int y) {
    int result = 0;
    for (int i = 0; i < y; i++) {
        result += x;
    }
    return result;
}

int main() {
    int A, B, resultado = 1;

    printf("Digite o valor de A (base): ");
    scanf("%d", &A);
    printf("Digite o valor de B (expoente): ");
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {
        resultado = multiply(resultado, A);
    }

    printf("%d\n", resultado);

    return 0;
}