#include <stdio.h>

int main() {
    int N, I, J, soma = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int valores[N];

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Digite os valores de I e J: ");
    scanf("%d %d", &I, &J);

    if (I < 0 || I >= N || J < 0 || J >= N) {
        printf("INVALIDO\n");
    } else {
        if (I > J) {
            int temp = I;
            I = J;
            J = temp;
        }
        for (int i = I; i <= J; i++) {
            soma += valores[i];
        }
        printf("%d\n", soma);
    }

    return 0;
}