#include <stdio.h>

int main() {
    int N, M, soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    printf("Digite o valor de M: ");
    scanf("%d", &M);

    if (N > M) {
        int temp = N;
        N = M;
        M = temp;
    }

    for (int i = N; i <= M; i++) {
        soma += i;
    }

    printf("%d\n", soma);

    return 0;
}