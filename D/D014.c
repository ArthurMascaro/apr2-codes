#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N];

    printf("Digite %d valores inteiros para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        int temp = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = temp;
    }

    printf("Vetor A invertido:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}