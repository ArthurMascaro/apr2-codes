#include <stdio.h>

int main() {
    int N, I;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o índice I: ");
    scanf("%d", &I);

    if (I < 0 || I >= N) {
        printf("INVALIDO\n");
        return 1;
    }

    for (int i = I; i < N - 1; i++) {
        A[i] = A[i + 1];
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}