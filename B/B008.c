#include <stdio.h>

int main() {
    int A, B, C, maior;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    maior = A;

    if (B > maior) {
        maior = B;
    }
    if (C > maior) {
        maior = C;
    }

    printf("%d\n", maior);

    return 0;
}