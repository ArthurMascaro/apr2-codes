#include <stdio.h>

int main() {
    int N, X;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N], B[N];
    int b_count = 0;

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (A[i] > X) {
            B[b_count++] = A[i];
        }
    }

    printf("Vetor B (elementos de A maiores que X):\n");
    for (int i = 0; i < b_count; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}