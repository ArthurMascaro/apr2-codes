#include <stdio.h>

int main() {
    int N, num, maior, menor, soma = 0;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Número inválido\n");
        return 1;
    }

    printf("Digite %d números inteiros:\n", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (i == 0) {
            maior = menor = num;
        } else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
        soma += num;
    }

    printf("%d\n", maior);
    printf("%d\n", menor);
    printf("%d\n", soma);

    return 0;
}