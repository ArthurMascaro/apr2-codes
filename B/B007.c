#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }

    printf("%d\n%d\n", A, B);

    return 0;
}