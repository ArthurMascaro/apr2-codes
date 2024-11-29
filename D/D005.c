#include <stdio.h>

int main() {
    int N, X, count = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int valores[N];

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (int i = 0; i < N; i++) {
        if (valores[i] == X) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}