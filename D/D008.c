#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N], B[N], C[N];

    printf("Digite %d valores inteiros para a lista A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite %d valores inteiros para a lista B:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    printf("A lista resultante C é:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}