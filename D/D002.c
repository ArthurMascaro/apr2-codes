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

    printf("Os valores lidos são:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}