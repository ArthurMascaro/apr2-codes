#include <stdio.h>

int main() {
    int A, B, resultado = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {
        resultado += A;
    }

    printf("%d\n", resultado);

    return 0;
}