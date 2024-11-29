#include <stdio.h>

int main() {
    int N, M;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    int B[M];

    printf("Digite %d valores inteiros para o vetor B:\n", M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    int C[N + M];
    int i = 0, j = 0, k = 0;

    if (N >= M) {
        while (i < N && j < M) {
            C[k++] = A[i++];
            if (j < M) {
                C[k++] = B[j++];
            }
        }
    } else {
        while (i < N && j < M) {
            C[k++] = B[j++];
            if (i < N) {
                C[k++] = A[i++];
            }
        }
    }

    while (i < N) {
        C[k++] = A[i++];
    }

    while (j < M) {
        C[k++] = B[j++];
    }

    printf("Vetor resultante C:\n");
    for (int i = 0; i < N + M; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}