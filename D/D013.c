#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N], B[N], C[2 * N];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite %d valores inteiros para o vetor B:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        C[2 * i] = A[i];
        C[2 * i + 1] = B[i];
    }

    printf("Vetor C (intercalado):\n");
    for (int i = 0; i < 2 * N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}