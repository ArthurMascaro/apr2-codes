#include <stdio.h>

int main() {
    int N, I, X;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N + 1];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o índice I e o valor X: ");
    scanf("%d %d", &I, &X);

    if (I < 0) {
        printf("INVALIDO\n");
        return 1;
    }

    if (I > N) {
        I = N;
    }

    for (int i = N; i > I; i--) {
        A[i] = A[i - 1];
    }
    A[I] = X;

    printf("Vetor resultante:\n");
    for (int i = 0; i <= N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}