#include <stdio.h>

int main() {
    int N, num;
    int maior1 = -2147483648, maior2 = -2147483648; // Initialize to the smallest possible integer

    printf("Digite a quantidade de números no conjunto: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Quantidade insuficiente de números.\n");
        return 1;
    }

    printf("Digite os números do conjunto:\n");

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num > maior1) {
            maior2 = maior1;
            maior1 = num;
        } else if (num > maior2) {
            maior2 = num;
        }
    }

    printf("%d\n%d\n", maior1, maior2);

    return 0;
}