#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int valores[N];

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < N - 1; i += 2) {
        int temp = valores[i];
        valores[i] = valores[i + 1];
        valores[i + 1] = temp;
    }

    printf("A lista resultante é:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}