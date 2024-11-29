#include <stdio.h>

int main() {
    int N, M;

    printf("Digite as dimensões N e M da matriz: ");
    scanf("%d %d", &N, &M);

    int A[N][M];

    printf("Digite %d valores para a matriz:\n", N * M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}