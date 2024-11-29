#include <stdio.h>

int main() {
    int N, X;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    int j = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != X) {
            A[j++] = A[i];
        }
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}