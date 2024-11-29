#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%d", &A);
    printf("Digite o valor do lado B: ");
    scanf("%d", &B);
    printf("Digite o valor do lado C: ");
    scanf("%d", &C);

    if (A + B <= C || A + C <= B || B + C <= A) {
        printf("INVALIDO\n");
    } else if (A == B && B == C) {
        printf("EQUILATERO\n");
    } else if (A == B || A == C || B == C) {
        printf("ISOSCELES\n");
    } else {
        printf("ESCALENO\n");
    }

    return 0;
}