#include <stdio.h>

int main() {
    int A, B, C, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}