#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int A[N], B[N];
    int a_count = 0, b_count = 0;

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        int valor;
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            A[a_count++] = valor;
        } else {
            B[b_count++] = valor;
        }
    }

    printf("Lista A (pares):\n");
    for (int i = 0; i < a_count; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Lista B (ímpares):\n");
    for (int i = 0; i < b_count; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}