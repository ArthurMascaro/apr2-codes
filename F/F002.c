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

    printf("Soma de cada linha da matriz:\n");
    for (int i = 0; i < N; i++) {
        int soma = 0;
        for (int j = 0; j < M; j++) {
            soma += A[i][j];
        }
        printf("%d\n", soma);
    }

    return 0;
}