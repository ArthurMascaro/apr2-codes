#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int valores[N];
    int maior_valor, posicao;

    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &valores[i]);
    }

    maior_valor = valores[0];
    posicao = 0;

    for (int i = 1; i < N; i++) {
        if (valores[i] > maior_valor) {
            maior_valor = valores[i];
            posicao = i;
        }
    }

    printf("%d\n", maior_valor);
    printf("%d\n", posicao);

    return 0;
}